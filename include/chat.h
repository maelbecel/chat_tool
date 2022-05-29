/*
** EPITECH PROJECT, 2022
** chat.c
** File description:
** chat
*/

#ifndef CHAT
    #define CHAT
    #include <stdbool.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <errno.h>
    #include <string.h>
    #include <sys/types.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ifaddrs.h>
    #include <sys/types.h>
    #include <sys/ioctl.h>
    #include <net/if.h>
    #include <errno.h>
    #include <netdb.h>

    #define KICK (int)0xC0FFEE
    #define SERVER_CLOSED  (int)0xEFFACE

    int server(void);
    int client(int __port, char *__ip);
    void say(char *str, int fd, char sendBuff[1025]);
    void kick(int fd, char sendBuff[1025]);
    void leave(int fd, char sendBuff[1025]);
    void help(void);
    void _ascii_kick(void);
    void _ascii_close(void);
    void _ascii_launch(void);
    void _ascii_connected(void);
    char *array_to_str(char **array);


#endif
