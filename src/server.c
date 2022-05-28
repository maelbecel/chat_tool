/*
** github.com/maelbecel/chat_tool
** server.c
** File description:
** Server
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

char *get_input(void)
{
    char *input = NULL;
    size_t size = 0;
    getline(&input, &size, stdin);
    return input;
}

int server(void)
{
    int listenfd = 0;
    int connfd = 0;
    struct sockaddr_in serv_addr;
    char sendBuff[1025];

    listenfd = socket(AF_INET, SOCK_STREAM, 0);
    printf("socket retrieve success\n");
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
        printf("Now listening on port %i\n", serv_addr.sin_port);

    while (connfd == 0) {
        connfd = accept(listenfd, (struct sockaddr*)NULL ,NULL);
    }
    printf("User connected\n");
    while (1) {
        strcpy(sendBuff, get_input());
        write(connfd, sendBuff, strlen(sendBuff));
    }
    close(connfd);
    return 0;
}