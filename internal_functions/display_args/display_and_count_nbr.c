/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_nbr.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void display_and_count_nbr(va_list ptr, char *buffer)
{
    int to_print = va_arg(ptr, int);

    my_put_nbr_buff(to_print, buffer);
}
