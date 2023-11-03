/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_int.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void display_and_count_long_int(va_list ptr, char *buffer)
{
    long to_print = va_arg(ptr, long);

    my_put_nbr_buff((int) to_print, buffer);
}
