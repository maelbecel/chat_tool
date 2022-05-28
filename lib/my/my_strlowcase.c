/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
        i++;
    }
    return str;
}
