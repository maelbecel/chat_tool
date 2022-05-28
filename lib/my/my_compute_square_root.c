/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_compute_square_root(int nb)
{
    int res = 0;
    int i = 0;

    while (res < nb) {
        res = i * i;
        i++;
    }
    if (res == nb)
        return i;
    else
        return 0;
}
