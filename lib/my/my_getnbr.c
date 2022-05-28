/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** my swap
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] != '-' && str[i] != '+' && (str[i] < '0' || str[i] > '9')) {
        i++;
    }

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res += str[i] - 48;
        res *= 10;
        i++;
    }
    res /= 10;
    return (res * sign);
}
