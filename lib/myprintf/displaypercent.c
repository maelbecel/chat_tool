/*
** EPITECH PROJECT, 2021
** displaypercent.c
** File description:
** display percent
*/

#include <stdarg.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int displaypercent(__attribute__((unused))va_list argv)
{
    my_putchar('%');
    return 0;
}
