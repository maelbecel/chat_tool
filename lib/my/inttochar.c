/*
** EPITECH PROJECT, 2021
** intochar.C
** File description:
** int to char
*/

#include "my.h"
#include <stdlib.h>

char *inttochar(int num)
{
    char *res = malloc(num);
    int mod = 100;
    int division = 10;
    int i = 1;

    if (!res)
        return NULL;
    res[0] = num % 10 + 48;
    while (division <= num) {
        res[i++] = ((num % mod) / division) + 48;
        division *= 10;
        mod *= 10;
    }
    if (num < 0){
        res[i] = '-';
        i++;
    }
    res[i] = '\0';
    res = my_revstr(res);
    return res;
}
