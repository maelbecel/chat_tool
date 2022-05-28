/*
** EPITECH PROJECT, 2021
** star.c
** File description:
** star.c
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb == 0 || nb == 1)
        return 0;
    while (my_is_prime(nb) == 0)
        nb++;
    return nb;
}
