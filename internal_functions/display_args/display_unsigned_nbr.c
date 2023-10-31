/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_unsigned_nbr.c
*/

#include "../../includes/internal_data_structures.h"
#include "../../includes/base_lib.h"

void display_and_count_unsigned_nbr(va_list ptr)
{
    unsigned int to_print = va_arg(ptr, unsigned int);

    my_put_nbr(to_print);
}
