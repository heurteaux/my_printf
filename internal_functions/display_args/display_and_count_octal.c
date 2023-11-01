/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_octal.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void display_and_count_octal(va_list ptr)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "01234567");
}
