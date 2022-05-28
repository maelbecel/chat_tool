/*
** EPITECH PROJECT, 2021
** my_print_digits.c
** File description:
** print digits in ascending order
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    my_putchar('\n');
    return 0;
}
