/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** unsigned_integer_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/unsigned_integer_cases_array.h"


void unsigned_integer_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(unsigned_integer_cases_array[i].length_specifier,
                specifiers.length, 2)
            == 0) {
            unsigned_integer_cases_array[i].ptr(ptr);
        }
    }
}
