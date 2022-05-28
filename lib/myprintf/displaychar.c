/*
** EPITECH PROJECT, 2021
** displaychar.c
** File description:
** display char
*/

#include <unistd.h>
#include <stdarg.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int displaychar(va_list argv)
{
    int c = va_arg(argv, int);
    my_putchar(c);
    return 0;
}
