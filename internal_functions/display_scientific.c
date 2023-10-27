/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 26/10/23.
** File description:
** display_floating_pointer.c
*/

#include "../includes/base_lib.h"
#include <stdio.h>

int inferior(double nb, int i)
{
    for (; nb < 1; i++) {
        nb *= 10;
    }
    display_double(nb);
    my_putchar('e');
    my_putchar('-');
    my_putchar('0');
    my_put_nbr(i);
}

int superior(double nb, int i)
{
    for (; nb > 9; i++) {
        nb /= 10;
    }
    display_double(nb);
    my_putchar('e');
    my_putchar('+');
    my_putchar('0');
    my_put_nbr(i);
}

void display_scientific(double a)
{
    double nb = a;
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 1) {
        inferior(nb, i);
    }
    if (nb > 1) {
        superior(nb, i);
    }
}
