/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_scientific_float.c
*/

#include "../../includes/internal_functions.h"

void display_and_count_scientific_float(va_list ptr, char *buffer)
{
    double to_print = va_arg(ptr, double);

    display_scientific(to_print, buffer);
}
