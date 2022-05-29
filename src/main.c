/*
** github.com/maelbecel/chat_tool
** main.c
** File description:
** main
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

int select_type(char **argv)
{
    char **ip_port;

    if (my_strcmp(argv[1], "-server") == 0)
        server();
    else if (my_strcmp(argv[1], "-client") == 0 && argv[2] != NULL && (ip_port = my_str_to_word_array(argv[2], ':')) != NULL && ip_port[1] != NULL) {
        client(my_getnbr(ip_port[1]), ip_port[0]);
    } else {
        printf("Type must be server or client with pip:port\n");
        return 84;
    }
    return 0;
}

int main (int ac, char **argv, UNUSED char **env)
{
    if (ac < 2 || ac > 3) {
        printf("Usage: ./chat_tool type\n");
        return (84);
    }
    return select_type(argv);
}
