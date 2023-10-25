/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_args_math.c
*/

#include "../includes/internal_functions.h"
#include "../includes/base_lib.h"

void display_and_count_hex(va_list ptr, int *count)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "0123456789abcdef");
    *count += int_base_length(to_print, 16);
}

void display_and_count_octal(va_list ptr, int *count)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "01234567");
    *count += int_base_length(to_print, 8);
}

void display_and_count_nbr(va_list ptr, int *count)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr(to_print);
    *count += int_length(to_print);
    if (to_print <= 0)
        *count += 1;
}
