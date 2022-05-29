/*
** github.com/maelbecel/chat_tool
** server.c
** File description:
** Server
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

void say(char *str, int fd, char sendBuff[1025])
{
    strcpy(sendBuff, str);
    write(fd, sendBuff, strlen(sendBuff));
}

void kick(int fd, char sendBuff[1025])
{
    say(inttochar(KICK), fd, sendBuff);
}

void leave(int fd, char sendBuff[1025])
{
    say(inttochar(SERVER_CLOSED), fd, sendBuff);
    _ascii_close();
}

void help(void)
{
    my_printf("USAGE :\n");
    my_printf("say <message> : send a message to the client\n");
    my_printf("kick          : kick the client\n");
    my_printf("exit          : close the server\n");
}