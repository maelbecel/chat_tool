/*
** github.com/maelbecel/chat_tool
** client.c
** File description:
** Client
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

int client(int port) {
    int sockfd = 0;
    int n = 0;
    char recvBuff[1024];
    struct sockaddr_in serv_addr;
    char *ip = "127.0.0.1";

    memset(recvBuff, '0',sizeof(recvBuff));
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("Error : Could not create socket...\n");
        return 1;
    } else
        printf("\n Socket created \n");
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    serv_addr.sin_addr.s_addr = inet_addr(ip);

    if(serv_addr.sin_addr.s_addr == ( in_addr_t)(-1) ||
        connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("Error : Connect Failed...\n");
        return 1;
    } else
        printf("Connected to %i as %s...\n\n", serv_addr.sin_addr.s_addr, ip);
    while(1) {
        n = read(sockfd, recvBuff, sizeof(recvBuff)-1);
        recvBuff[n] = 0;
        if (recvBuff[0] != '\0') {
            if (my_getnbr(recvBuff) == KICK) {
                my_printf("\e[1;33mBye bye\n");
                break;
            } if (my_getnbr(recvBuff) == SERVER_CLOSED) {
                my_printf("\e[1;31mServer closed\n");
                break;
            }
            my_printf("\e[1;33mSERVER -> %s\n\e[0m", recvBuff);
        }
    }
    return 0;
}