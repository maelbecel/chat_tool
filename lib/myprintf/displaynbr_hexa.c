/*
** EPITECH PROJECT, 2021
** displaynbr_hexa.c
** File description:
** display number in hexa base
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putinhexa(int nb)
{
    int quotient = nb;
    int r;
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

int displaynbr_hexa(va_list argv)
{
    int nb = va_arg(argv, int);
    my_putinhexa(nb);
    return 0;
}

int displaynbr_hexa_hashtag(va_list argv)
{
    int nb = va_arg(argv, int);
    my_putchar('0');
    my_putchar('x');
    my_putinhexa(nb);
    return 0;
}
