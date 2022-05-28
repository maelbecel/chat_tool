/*
** EPITECH PROJECT, 2021
** displaynbr_octal.c
** File description:
** display nbr in octal
*/

#include <stdio.h>
#include <stdarg.h>
#include "printf.h"

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        i = nb % 10;
        nb /= 10;
        my_put_nbr(nb);
        my_putchar(i + 48);
    } else
        my_putchar(nb + 48);
}

int my_getinoctal(int nb)
{
    int quotient = nb;
    int r;
    int res = 0;
    int x = 1;
    int j = 0;

    if (nb < 0){
        quotient = quotient * -1;
        my_putchar('-');
        j += 1;
    }
    while (quotient != 0) {
        r = quotient % 8;
        res += r * x;
        quotient /= 8;
        j++;
        x *= 10;
    }
    return res;
}

int displaynbr_octal(va_list argv)
{
    unsigned int nb = va_arg(argv, unsigned int);
    my_put_nbr(my_getinoctal(nb));
    return 0;
}

int displaynbr_octal_hashtag(va_list argv)
{
    my_putchar('0');
    displaynbr_octal(argv);
    return 0;
}
