/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_long_double.c
*/

#include "../../includes/internal_functions.h"

void
display_and_count_long_double(va_list ptr, char *buffer)
{
    double to_print = va_arg(ptr, double);

    display_long_double(to_print, buffer);
}
