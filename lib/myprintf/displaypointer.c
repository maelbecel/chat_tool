/*
** EPITECH PROJECT, 2021
** displaychar.c
** File description:
** display char
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putadress(long long nb)
{
    long long quotient = nb;
    long long r;
    char *base = "0123456789abcdef";
    char *res = malloc(16 * 10000);
    int j = 0;

    if (!res)
        return 84;
    while (quotient != 0) {
        r = quotient % 16;
        res[j] = base[r];
        quotient /= 16;
        j++;
    }
    for (int i = j; i >= 0; i--)
        my_putchar(res[i]);
    free(res);
    return 0;
}

int displaypointer(va_list argv)
{
    long long nb = va_arg(argv, long long);
    my_putchar('0');
    my_putchar('x');
    my_putadress(nb);
    return 0;
}
