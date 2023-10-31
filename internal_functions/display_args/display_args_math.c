/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_args_math.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"
#include <stdio.h>

void display_and_count_hex(va_list ptr)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "0123456789abcdef");
}

void display_and_count_octal(va_list ptr)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "01234567");
}

void display_and_count_nbr(va_list ptr)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr(to_print);
}

void display_and_count_scientific_float(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_scientific(to_print);
}

void display_and_count_maj_scientific_float(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_maj_scientific(to_print);
}
