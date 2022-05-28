/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

// 32 32 32 32 32

#include <stdio.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[0] == 0)
        return 1;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] == 126)
            return 0;
        i++;
    }
    return 1;
}
