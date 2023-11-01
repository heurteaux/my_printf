/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** maj_hex_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/maj_hex_cases_array.h"

void maj_hex_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                maj_hex_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            maj_hex_cases_array[i].ptr(ptr);
        }
    }
}
