/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** percent_handling.c
*/

#include "../../includes/internal_functions.h"

void percent_handling(va_list ptr,
    __attribute__((unused)) specifier_t specifiers,
    __attribute__((unused)) char *buffer)
{
    display_and_count_percent(ptr);
}
