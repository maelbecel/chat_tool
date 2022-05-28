/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n);

int my_strcmp(char const *s1, char const *s2)
{
    int s1_len = my_strlen(s1);
    int s2_len = my_strlen(s2);

    if (s1_len >= s2_len)
        return (my_strncmp(s1, s2, s1_len));
    else
        return (my_strncmp(s1, s2, s2_len));
}
