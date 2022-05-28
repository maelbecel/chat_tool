/*
** EPITECH PROJECT, 2021
** displaybinary.c
** File description:
** display binary
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int displaybinary(va_list argv)
{
    int nb = va_arg(argv, int);
    char *res = malloc(sizeof(char) * nb);
    int i = 0;
    int r = nb;

    if (!res)
        return 84;
    if (nb < 0)
        my_putchar('-');
    while (r > 0) {
        res[i] = r % 2 + '0';
        r = r / 2;
        i++;
    }
    i--;
    for (; i >= 0; i--)
        my_putchar(res[i]);
    free(res);
    return 0;
}
