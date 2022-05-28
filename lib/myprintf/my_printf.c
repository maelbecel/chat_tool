/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my printf
*/

#include "printf.h"
#include <stdarg.h>
#include <stdlib.h>

static const struct flags Functions[] = {
    {&displaychar, 'c'},
    {&displaypercent, '%'},
    {&displaynbr, 'i'},
    {&displaynbr, 'd'},
    {&displaynbr, 'h'},
    {&displaynbr_long, 'l'},
    {&displaystr, 's'},
    {&displaybinary, 'b'},
    {&displaystr_unprintable, 'S'},
    {&displaynbr_octal, 'o'},
    {&displaynbr_dec, 'u'},
    {&displaynbr_hexa, 'x'},
    {&displaynbr_hexa_capital, 'X'},
    {&displaypointer, 'p'},
    {NULL, -1},
};

static const struct flags Hashtags[] = {
    {&displaynbr_octal_hashtag, 'o'},
    {&displaynbr_hexa_hashtag, 'x'},
    {&displaynbr_hexa_capital_hashtag, 'X'},
    {NULL, -1},
};

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int displayhashtag(char c, va_list argv)
{
    for (int i = 0; Hashtags[i].flag != -1; i++) {
        if (Hashtags[i].flag == c) {
            Hashtags[i].func(argv);
            break;
        }
    }
    return 0;
}

int displayflags(char c, va_list argv)
{
    for (int i = 0; Functions[i].flag != -1; i++) {
        if (Functions[i].flag == c) {
            Functions[i].func(argv);
            break;
        }
    }
    return 0;
}

int my_printf(char const *str, ...)
{
    va_list argv;
    va_start(argv, str);
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '%' && str[i + 1] == '#'){
            displayhashtag(str[i + 2], argv);
            i += 2;
        }else if (str[i] == '%'){
            displayflags(str[i + 1], argv);
            i++;
        }else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(argv);
    return 0;
}
