/*
** github.com/maelbecel/chat_tool
** server.c
** File description:
** Server
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

char *getip(void)
{
    int fm = AF_INET;
    struct ifaddrs *ifaddr, *ifa;
	int family , s;
	char host[NI_MAXHOST];
    FILE *f;
    char line[100] , *p , *c;

    f = fopen("/proc/net/route" , "r");
    while(fgets(line , 100 , f)) {
		p = strtok(line , " \t");
		c = strtok(NULL , " \t");
		if (p != NULL && c != NULL) {
			if(strcmp(c , "00000000") == 0)
			{
				printf("Default interface is : %s \n" , p);
				break;
			}
		}
	}

	if (getifaddrs(&ifaddr) == -1) {
		perror("getifaddrs");
		exit(EXIT_FAILURE);
	}
	for (ifa = ifaddr; ifa != NULL; ifa = ifa->ifa_next) {
		if (ifa->ifa_addr == NULL)
			continue;
		family = ifa->ifa_addr->sa_family;
		if(strcmp( ifa->ifa_name , p) == 0)
		{
			if (family == fm)
			{
				s = getnameinfo( ifa->ifa_addr, (family == AF_INET) ? sizeof(struct sockaddr_in) : sizeof(struct sockaddr_in6) , host , NI_MAXHOST , NULL , 0 , NI_NUMERICHOST);
				if (s != 0)
				{
					printf("getnameinfo() failed: %s\n", gai_strerror(s));
					exit(EXIT_FAILURE);
				}
				printf("address: %s", host);
			}
			printf("\n");
		}
	}
	freeifaddrs(ifaddr);
    return NULL;
}

static void prompt(void)
{
    my_putstr("$> ");
}

char *get_input(void)
{
    char *input = NULL;
    size_t size = 0;
    ssize_t i = getline(&input, &size, stdin);
    input[i - 1] = '\0';
    return input;
}

int server(void)
{
    int listenfd = 0;
    int connfd = 0;
    struct sockaddr_in serv_addr;
    char sendBuff[1025];
    char **input_array;

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    printf("Socket retrieve success...\n");
    memset(&serv_addr, '0', sizeof(serv_addr));
    memset(sendBuff, '0', sizeof(sendBuff));

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    serv_addr.sin_port = htons(9001);
    bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr));
    _ascii_launch();
    getip();
    if (listen(listenfd, 10) == -1) {
        printf("Failed to listen\n");
        return -1;
    } else if (system("./src/getip.sh") == -1) {
        perror("netstat :");
        return 84;
    }
    while (connfd == 0) {
        connfd = accept(listenfd, (struct sockaddr*)NULL ,NULL);
    }
    _ascii_connected();
    while (1) {
        prompt();
        input_array = my_str_to_word_array(get_input(), ' ');
        if (my_strcmp(input_array[0], "say") == 0) {
            say(array_to_str(input_array + 1), connfd, sendBuff);
        } else if (my_strcmp(input_array[0], "kick") == 0)
            kick(connfd, sendBuff);
        else if (my_strcmp(input_array[0], "help") == 0)
            help();
        else if (my_strcmp(input_array[0], "exit") == 0) {
            leave(connfd, sendBuff);
            break;
        } else
            printf("Unknown command '%s'\n", input_array[0]);
    }
    close(connfd);
    return 0;
}