/*
** github.com/maelbecel/chat_tool
** ascii.c
** File description:
** Every ascii arts
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

void _ascii_connected(void)
{
    my_printf("\n");
    my_printf("\x1b[32m//////////////////////////////////////////////\n");
    my_printf("\x1b[32m//          Sucessfully connected           //\n");
    my_printf("\x1b[32m//////////////////////////////////////////////\n");
    my_printf("\x1b[0m\n");
}

void _ascii_launch(void)
{
    my_printf("\n");
    my_printf("\x1b[32m//////////////////////////////////////////////\n");
    my_printf("\x1b[32m//               Server launch              //\n");
    my_printf("\x1b[32m//////////////////////////////////////////////\n");
    my_printf("\x1b[0m\n");
}

void _ascii_kick(void)
{
    my_printf("\n");
    my_printf("\x1b[31m//////////////////////////////////////////////\n");
    my_printf("\x1b[31m//           Kicked by the server           //\n");
    my_printf("\x1b[31m//////////////////////////////////////////////\n");
    my_printf("\x1b[0m\n");
}

void _ascii_close(void)
{
    my_printf("\n");
    my_printf("\x1b[31m//////////////////////////////////////////////\n");
    my_printf("\x1b[31m//              Server closed               //\n");
    my_printf("\x1b[31m//////////////////////////////////////////////\n");
    my_printf("\x1b[0m\n");
}