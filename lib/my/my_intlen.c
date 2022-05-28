/*
** EPITECH PROJECT, 2022
** intlen
** File description:
** intlen
*/

int my_intlen(int x)
{
    int res = 1;

    for (; x >= 10; res++)
        x /= 10;
    return res;
}
