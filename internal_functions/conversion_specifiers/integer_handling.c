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
    va_list args_cp;
    int nb;

    va_copy(args_cp, ptr);
    nb = va_arg(args_cp, int);
    if (is_flag_present(specifiers.flags, '+') && nb >= 0) {
        my_putchar('+');
    }
    if (is_flag_present(specifiers.flags, ' ') && nb >= 0
        && !is_flag_present(specifiers.flags, '+')) {
        my_putchar(' ');
    }
    for (int i = 0; i < 2; i++) {
        if (my_strncmp(
                int_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            int_cases_array[i].ptr(ptr);
        }
    }
}
