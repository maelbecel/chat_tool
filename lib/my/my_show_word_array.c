/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

#include <stdlib.h>

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i++;
    }
    return 0;
}
