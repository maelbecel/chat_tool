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
    int sockfd = 0,n = 0;
    char recvBuff[1024];
    struct sockaddr_in serv_addr;

    memset(recvBuff, '0',sizeof(recvBuff));
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("\n Error : Could not create socket \n");
        return 1;
    } else
        printf("\n Socket created \n");
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    if(connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("\n Error : Connect Failed \n");
        return 1;
    } else
        printf("\n Connected to %i\n", serv_addr.sin_addr.s_addr);
    while(1) {
        n = read(sockfd, recvBuff, sizeof(recvBuff)-1);
        recvBuff[n] = 0;
        if(fputs(recvBuff, stdout) == EOF)
            printf("\n Error : Fputs error");
        if (recvBuff[0] != '\0')
            printf("\n Recieve : %s", recvBuff);
    }
    if( n < 0)
        printf("\n Read Error \n");
    return 0;
}