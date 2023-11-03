/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 26/10/23.
** File description:
** display_floating_pointer.c
*/

#include <stdarg.h>
#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"

static void inferior(double nb, char *buffer)
{
    int i = 0;

    for (; nb < 1; i++) {
        nb *= 10;
    }
    display_double(nb, buffer);
    my_putchar_buff('E', buffer);
    my_putchar_buff('-', buffer);
    my_putchar_buff('0', buffer);
    my_put_nbr_buff(i, buffer);
}

static void superior(double nb, char *buffer)
{
    int i = 0;

    for (; nb > 10; i++) {
        nb /= 10;
    }
    display_double(nb, buffer);
    my_putchar_buff('E', buffer);
    my_putchar_buff('+', buffer);
    my_putchar_buff('0', buffer);
    my_put_nbr_buff(i, buffer);
}

void display_maj_scientific(double a, char *buffer)
{
    double nb = a;

    if (nb < 0) {
        my_putchar_buff('-', buffer);
        nb = nb * (-1);
    }
    if (nb < 1) {
        inferior(nb, buffer);
    }
    if (nb > 1) {
        superior(nb, buffer);
    }
}
