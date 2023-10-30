/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** basic_conversion_modifiers.c
*/

#include <stddef.h>
#include <stdarg.h>
#include "../../includes/conversions_arrays/int_cases_array.h"
#include "../../includes/internal_data_structures.h"
#include "../../includes/base_lib.h"


void integer_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 2; i++) {
        if (int_cases_array[i].length_specifier == specifiers.length) {
            int_cases_array[i].ptr(ptr);
        }
    }
}
