/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb == 0 || nb == 1)
        return 0;
    while (i < nb) {
        if (nb % i == 0)
            return 1;
        i++;
    }
    return 0;
}
