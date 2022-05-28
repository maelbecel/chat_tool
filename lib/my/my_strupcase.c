/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] -= 32;
        i++;
    }
    return str;
}
