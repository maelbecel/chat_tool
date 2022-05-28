/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

#include <stdio.h>

void swap(int *array, int a, int b)
{
    int tmp = 0;

    tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}

int compare(int *array, int i, int sorted)
{
    if (array[i] > array[i + 1]) {
        swap(array, i, i + 1);
        sorted = 1;
    }
    return sorted;
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int sorted = 1;

    while (sorted == 1) {
        sorted = 0;
        for (i = 0; i < size; i++) {
            compare(array, i, sorted);
        }
    }
}
