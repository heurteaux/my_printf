/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_maj_hex.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_data_structures.h"

void display_and_count_maj_hex(va_list ptr)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_base(to_print, "0123456789ABCDEF");
}
