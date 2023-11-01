/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal_data_structure.h
*/

#include <stdarg.h>
#include "includes/base_lib.h"
#include "includes/conversion_specifiers_array.h"
#include "includes/internal_functions.h"

void variables_handler(specifier_t specifiers, va_list ptr)
{
    for (int i = 0; i < 16; i++) {
        if (conversion_specifiers_array[i].convertion_specifier
            == specifiers.conversion) {
            conversion_specifiers_array[i].ptr(ptr, specifiers);
        }
    }
}

void my_printf(const char *format, ...)
{
    va_list ptr;
    specifier_t specifiers;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            specifiers = collect_flags(&format[i + 1]);
            variables_handler(specifiers, ptr);
            i += my_strlen(specifiers.flags) + int_length(specifiers.precision)
                + int_length(specifiers.width) + my_strlen(specifiers.length)
                + 1;
            continue;
        }
        my_putchar(format[i]);
    }
    va_end(ptr);
}
