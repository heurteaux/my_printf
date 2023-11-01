/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_double.c
*/

#include "../../includes/internal_functions.h"


void display_and_count_double(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_double(to_print);
}
