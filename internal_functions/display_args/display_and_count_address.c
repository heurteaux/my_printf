/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_and_count_address.c
*/

#include "../../includes/internal_functions.h"

void display_and_count_address(va_list ptr)
{
    void *to_print = va_arg(ptr, void *);

    my_put_address(to_print);
}
