/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int power(int res, int nb, int p)
{
    if (p > 1)
        power(res * nb, nb, p - 1);
    else
        return res;
    return res;
}

int my_compute_power_rec(int nb, int p)
{
    int res = nb;

    if (p == 0)
        return 1;
    else if (p < 0)
        return 0;
    return (power(res, nb, p));
}
