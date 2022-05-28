/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdio.h>

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 1;

    str = my_strlowcase(str);
    if (str[0] > 'a' && str[0] < 'z')
        str[0] -= 32;
    while (str[i] != '\0') {
        if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
        || (str[i - 1] >= 'a' && str[i - 1] <= 'z'));
        else if (!((str[i] >= '0' && str[i] <= '9') || str[i] == ' '))
            str[i] -= 32;
        i++;
    }
    return str;
}
