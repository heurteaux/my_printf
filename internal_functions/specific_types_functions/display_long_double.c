/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 26/10/23.
** File description:
** display_long_double.c
*/

#include "../../includes/base_lib.h"
#include <stdio.h>
#include "../../includes/internal_functions.h"

void display_long_double(double a, char *buffer)
{
    int tempo = 0;
    int rounded = (int) a;
    double decimal_part = a - rounded;

    if (decimal_part < 0) {
        decimal_part = decimal_part * (-1);
    }
    my_put_nbr_buff(rounded, buffer);
    my_putstr_buff(".", buffer);
    for (int i = 0; i < 6; i++) {
        decimal_part *= 10;
        tempo = (int) decimal_part;
        decimal_part = decimal_part - tempo;
        if (i == 6 && decimal_part > 0.5) {
            tempo += 1;
        }
        my_put_nbr_buff(tempo, buffer);
    }
}
