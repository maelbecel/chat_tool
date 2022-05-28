/*
** EPITECH PROJECT, 2022
** lib
** File description:
** str_to_word_array
*/

#include <stdlib.h>
int my_strlen(char const *str);

static int count_line(char *str, char separator)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator)
            nb++;
    }
    return nb;
}

static int size_str(char *str, int i, char separator)
{
    int nb = 0;
    for (; str[i] != separator && str[i] != '\0'; i++) {
        nb++;
    }
    return nb;
}

static char *fill_array(char *str, int i, char separator)
{
    int j = 0;
    int size = size_str(str, i, separator);
    char *arg = malloc(sizeof(char) * (size + 1));

    for (; str[i] != separator && str[i] != '\0'; i++) {
        arg[j] = str[i];
        j++;
    }
    arg[j] = '\0';
    return arg;
}

char **my_str_to_word_array(char *str, char separator)
{
    int j = 0;
    int size = count_line(str, separator);
    char **array = malloc(sizeof(char *) * (size + 2));

    for (int i = 0; i < my_strlen(str); i++) {
        for (; str[i] == separator && str[i] != '\0'; i++);
        array[j] = fill_array(str, i, separator);
        j++;
        for (; str[i] != separator && str[i] != '\0'; i++);
    }
    array[j] = NULL;
    return array;
}