/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int my_strarraylen(char const **str)
{
    int i = 0;

    while (str[i] != NULL)
        i++;
    return i;
}
