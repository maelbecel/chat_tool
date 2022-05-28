/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
