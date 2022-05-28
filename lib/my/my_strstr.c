/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdio.h>

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len_find = my_strlen(to_find);

    while (str[i] != '\0') {
        if (str[i] == to_find[j])
            j++;
        else
            j = 0;
        if (j == len_find - 1)
            return (str + i - len_find + 2);
        i++;
    }
    return 0;
}
