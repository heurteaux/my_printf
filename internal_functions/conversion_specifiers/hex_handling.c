/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** hex_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/hex_cases_array.h"

void hex_handling(va_list ptr, specifier_t specifiers, char *buffer)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                hex_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            hex_cases_array[i].ptr(ptr, buffer);
        }
    }
}
