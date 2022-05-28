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
    #include <stdio.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <errno.h>
    #include <string.h>
    #include <sys/types.h>

    int server(void);
    int client(int port);

#endif
