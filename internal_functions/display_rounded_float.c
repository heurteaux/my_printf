/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 26/10/23.
** File description:
** float.c
*/
#include "../includes/base_lib.h"
#include <stdio.h>

static void display_rounded_float(double a)
{
    int rounded = (int) a;
    int decimal_part = (int) ((a - rounded) * 1000000);

    if (decimal_part < 0) {
        decimal_part = decimal_part * (-1);
    }
    my_put_nbr(rounded);
    my_putstr(".");
    my_put_nbr(decimal_part);
}