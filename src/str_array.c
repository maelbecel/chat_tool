/*
** github.com/maelbecel/chat_tool
** str_array.c
** File description:
** Turn str array into str
*/

#include "my.h"
#include "printf.h"
#include "chat.h"

char *conc(char *a, char *b)
{
    char *res = malloc(my_strlen(a) + my_strlen(b) + 1);
    int x = 0;

    if (!res)
        return NULL;
    for (int i = 0; i < my_strlen(a); i++, x++)
        res[x] = a[i];
    for (int i = 0; i < my_strlen(b); i++, x++)
        res[x] = b[i];
    res[x] = '\0';
    return res;
}

char *array_to_str(char **array)
{
    char *res = "";
    int i = 0;

    if (!array)
        return NULL;
    while (array[i])
        res = conc(res, conc(array[i++], " "));
    return res;
}