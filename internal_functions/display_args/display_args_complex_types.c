/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_args_complex_types.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void display_and_count_unsigned_short(va_list ptr)
{
    unsigned int to_print = va_arg(ptr, unsigned int);

    my_put_nbr((int) to_print);
}

void display_and_count_float(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_float(to_print);
}

void display_and_count_long_int(va_list ptr)
{
    long to_print = va_arg(ptr, long);

    my_put_nbr((int) to_print);
}

void display_and_count_double(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_double(to_print);
}

void
display_and_count_long_double(va_list ptr)
{
    double to_print = va_arg(ptr, double);

    display_long_double(to_print);
}
