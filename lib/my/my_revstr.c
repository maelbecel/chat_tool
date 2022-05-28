/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdio.h>

int my_strlen(char *str);

char *my_revstr(char *str)
{
    char temp;
    int first = 0;
    int last = my_strlen(str) - 1;

    while (first < last) {
        temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        first++;
        last--;
    }
    return (str);
}
