/*
** EPITECH PROJECT, 2021
** concat.c
** File description:
** concat 3 char *
*/

#include <stdlib.h>
#include "my.h"

int my_strlen(char const *str);

char *concat(char *before, char *mid, char *after)
{
    char *res = malloc(my_strlen(after) +
        my_strlen(mid) +
        my_strlen(before) + 1);

    if (!res)
        return NULL;
    res = my_strcat(res, before);
    res = my_strcat(res, mid);
    res = my_strcat(res, after);
    return res;
}
