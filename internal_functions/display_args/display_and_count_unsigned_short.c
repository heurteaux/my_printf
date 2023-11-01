/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_unsigned_short.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void display_and_count_unsigned_short(va_list ptr)
{
    unsigned int to_print = va_arg(ptr, unsigned int);

    my_put_nbr((int) to_print);
}
