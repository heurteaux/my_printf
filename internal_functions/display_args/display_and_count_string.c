/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_string.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_data_structures.h"

void display_and_count_string(va_list ptr)
{
    char *to_print = va_arg(ptr, char *);

    my_putstr(to_print);
}
