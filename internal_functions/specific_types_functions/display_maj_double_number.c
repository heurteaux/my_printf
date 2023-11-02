/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 01/11/23.
** File description:
** display_double_number.c
*/
#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"

static void superior(double nb)
{
    int i = 0;
    double tempo = nb;

    for (; nb >= 10; i++) {
        nb /= 10;
    }
    if (i >= 6) {
        display_double_for_number(nb);
        my_putchar('E');
        my_putchar('+');
        if (i <= 9) {
            my_putchar('0');
        }
        my_put_nbr(i);
    } else {
        display_double_for_number(tempo);
    }
}

static void inferior(double nb)
{
    int i = 0;
    double tempo = nb;

    for (; nb < 1; i++) {
        nb *= 10;
    }
    if (i >= 6) {
        display_double_for_number(nb);
        my_putchar('E');
        my_putchar('-');
        if (i <= 9) {
            my_putchar('0');
        }
        my_put_nbr(i);
    } else {
        display_double_for_number(tempo);
    }
}

void display_maj_double_number(double a)
{
    double nb = a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 1) {
        superior(nb);
    }
    if (nb < 1) {
        inferior(nb);
    }
}
