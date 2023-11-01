/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** octal_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/octal_cases_array.h"

void octal_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                octal_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            octal_cases_array[i].ptr(ptr);
        }
    }
}
