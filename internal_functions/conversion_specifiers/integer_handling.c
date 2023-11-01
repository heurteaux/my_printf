/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** integer_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/int_cases_array.h"

void integer_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 2; i++) {
        if (my_strncmp(
                int_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            int_cases_array[i].ptr(ptr);
        }
    }
}
