/*
** EPITECH PROJECT, 2023
** Created by seila.aillet@epitech.eu on 01/11/23.
** File description:
** display_double_for_number.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"

int find_zero(int i, double decimal_part)
{
    double tempo_decimal = decimal_part;

    for (int n = i; n < 6; n++) {
        tempo_decimal *= 10;
        if ((int) tempo_decimal != 0) {
            return 1;
        }
    }
    return 0;
}

void display_double_for_number(double a, char *buffer)
{
    int tempo;
    int rounded = (int) a;
    double decimal_part = a - rounded;
    int dot = 0;

    if (decimal_part < 0)
        decimal_part = decimal_part * (-1);
    my_put_nbr_buff(rounded, buffer);
    for (int i = 0; i < 5; i++) {
        decimal_part *= 10;
        tempo = (int)decimal_part;
        decimal_part = decimal_part - tempo;
        if (tempo == 0 && find_zero(i, decimal_part) == 0)
            break;
        if (dot == 0) {
            my_putstr_buff(".", buffer);
            dot = 1;
        }
        my_put_nbr_buff(tempo, buffer);
    }
}
