/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** char_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/char_cases_array.h"

void char_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                char_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            char_cases_array[i].ptr(ptr);
        }
    }
}
