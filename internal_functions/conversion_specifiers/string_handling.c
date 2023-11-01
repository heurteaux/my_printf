/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** string_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/string_cases_array.h"

void string_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                string_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            string_cases_array[i].ptr(ptr);
        }
    }
}
