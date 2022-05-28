/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n || dest[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
