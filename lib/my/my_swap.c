/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
