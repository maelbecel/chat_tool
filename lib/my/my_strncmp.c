/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_strncmp(char const *s1 , char const *s2, int n)
{
    int i = 0;
    int j = 0;
    char a;
    char b;
    while (i < n && j < n) {
        a = s1[i];
        b = s2[j];
        if (a != b) {
            return (a - b);
        }
        j++;
        i++;
    }
    return (0);
}
