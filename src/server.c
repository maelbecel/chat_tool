/*
** github.com/maelbecel/chat_tool
** server.c
** File description:
** Server
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

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

    if (listen(listenfd, 10) == -1) {
        printf("Failed to listen\n");
        return -1;
    } else
        printf("Now listening on port 9001...\n");

    while (connfd == 0) {
        connfd = accept(listenfd, (struct sockaddr*)NULL ,NULL);
    }
    printf("%i is connected...\n", connfd);
    while (1) {
        prompt();
        input_array = my_str_to_word_array(get_input(), ' ');
        if (my_strcmp(input_array[0], "say") == 0) {
            say(input_array[1], connfd, sendBuff);
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