/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 01/11/23.
** File description:
** display_double_number.c
*/
#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"

static void superior(double nb, char *buffer)
{
    int i = 0;
    double tempo = nb;

    for (; nb >= 10; i++) {
        nb /= 10;
    }
    if (i >= 6) {
        display_double_for_number(nb, buffer);
        my_putchar_buff('E', buffer);
        my_putchar_buff('+', buffer);
        if (i <= 9) {
            my_putchar_buff('0', buffer);
        }
        my_put_nbr_buff(i, buffer);
    } else {
        display_double_for_number(tempo, buffer);
    }
}

static void inferior(double nb, char *buffer)
{
    int i = 0;
    double tempo = nb;

    for (; nb < 1; i++) {
        nb *= 10;
    }
    if (i >= 6) {
        display_double_for_number(nb, buffer);
        my_putchar_buff('E', buffer);
        my_putchar_buff('-', buffer);
        if (i <= 9) {
            my_putchar_buff('0', buffer);
        }
        my_put_nbr_buff(i, buffer);
    } else {
        display_double_for_number(tempo, buffer);
    }
}

void display_maj_double_number(double a, char *buffer)
{
    double nb = a;

    if (nb < 0) {
        my_putchar_buff('-', buffer);
        nb = nb * (-1);
    }
    if (nb > 1) {
        superior(nb, buffer);
    }
    if (nb < 1) {
        inferior(nb, buffer);
    }
}
