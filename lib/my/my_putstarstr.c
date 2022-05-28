/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

#include <stdlib.h>

void my_putchar(char c);

void my_putstr(char *c);

void my_putstarstr(char **str, int nb_rows, char *separator)
{
    for (int i = 0; i < nb_rows; i++) {
        my_putstr(str[i]);
        my_putstr(separator);
    }
}
