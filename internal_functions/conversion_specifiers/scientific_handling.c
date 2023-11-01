/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** scientific_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/scientific_cases_array.h"

void scientific_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(scientific_cases_array[i].length_specifier,
                specifiers.length, 2)
            == 0) {
            scientific_cases_array[i].ptr(ptr);
        }
    }
}
