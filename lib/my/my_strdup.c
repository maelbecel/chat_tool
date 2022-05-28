/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *str)
{
    int len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (len + 1));
    if (!new_str)
        return NULL;
    my_strcpy(new_str, str);
    return new_str;
}
