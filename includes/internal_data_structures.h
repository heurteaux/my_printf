/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** internal_data_structures.h
*/

#pragma once
#include <stdarg.h>
#include "internal_functions.h"

typedef struct functions_s {
    char *flag;

    void (*ptr)(va_list, int *);
} functions_t;

functions_t array[20] = {{"c", display_and_count_char},
    {"d", display_and_count_nbr},
    {"i", display_and_count_nbr},
    {"s", display_and_count_string},
    {"%", display_and_count_percent},
    {"p", display_and_count_address},
    {"x", display_and_count_hex},
    {"o", display_and_count_octal},
    {"u", display_and_count_unsigned_short},
    {"ld", display_and_count_long_int},
    {"lf", display_and_count_double},
    {"Lf", display_and_count_long_double},
    {"f", display_and_count_float},
    {"e", display_and_count_scientific_float}};
