/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** float_mixed_handling.c
*/

#include "../../includes/internal_data_structures.h"
#include "../../includes/internal_functions.h"

void float_mixed_handling(va_list ptr, __attribute__((unused)) specifier_t specifiers)
{
    double to_print = va_arg(ptr, double);

    display_double_number(to_print);
}
