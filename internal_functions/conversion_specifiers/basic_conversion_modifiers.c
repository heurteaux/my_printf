/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** basic_conversion_modifiers.c
*/

#include <stddef.h>
#include <stdarg.h>
#include "../../includes/conversions_arrays/int_cases_array.h"
#include "../../includes/conversions_arrays/float_cases_array.h"
#include "../../includes/conversions_arrays/octal_cases_array.h"
#include "../../includes/conversions_arrays/unsigned_integer_cases_array.h"
#include "../../includes/conversions_arrays/hex_cases_array.h"
#include "../../includes/conversions_arrays/maj_hex_cases_array.h"
#include "../../includes/conversions_arrays/scientific_cases_array.h"
#include "../../includes/conversions_arrays/maj_scientific_cases_array.h"
#include "../../includes/conversions_arrays/mem_address_cases_array.h"
#include "../../includes/conversions_arrays/string_cases_array.h"
#include "../../includes/conversions_arrays/char_cases_array.h"
#include "../../includes/internal_data_structures.h"
#include "../../includes/base_lib.h"

void integer_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 2; i++) {
        if (my_strncmp(int_cases_array[i].length_specifier, specifiers.length,
                       2) == 0) {
            int_cases_array[i].ptr(ptr);
        }
    }
}

void float_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 2; i++) {
        if (my_strncmp(float_cases_array[i].length_specifier,
                       specifiers.length, 2) == 0) {
            float_cases_array[i].ptr(ptr);
        }
    }
}

void octal_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(octal_cases_array[i].length_specifier,
                       specifiers.length, 2) == 0) {
            octal_cases_array[i].ptr(ptr);
        }
    }
}

void unsigned_integer_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(unsigned_integer_cases_array[i].length_specifier,
                       specifiers.length, 2) == 0) {
            unsigned_integer_cases_array[i].ptr(ptr);
        }
    }
}

void hex_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(hex_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            hex_cases_array[i].ptr(ptr);
        }
    }
}

void maj_hex_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(maj_hex_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            maj_hex_cases_array[i].ptr(ptr);
        }
    }
}

void scientific_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(scientific_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            scientific_cases_array[i].ptr(ptr);
        }
    }
}

void maj_scientific_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(maj_scientific_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            maj_scientific_cases_array[i].ptr(ptr);
        }
    }
}

void percent_handling(va_list ptr, __attribute__((unused))specifier_t specifiers)
{
    display_and_count_percent(ptr);
}

void mem_address_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(mem_address_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            mem_address_cases_array[i].ptr(ptr);
        }
    }
}

void string_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(string_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            string_cases_array[i].ptr(ptr);
        }
    }
}

void char_handling(va_list ptr, specifier_t specifiers)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(char_cases_array[i].length_specifier, specifiers.length, 2) == 0) {
            char_cases_array[i].ptr(ptr);
        }
    }
}
