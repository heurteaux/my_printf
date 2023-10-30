/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal_data_structure.h
*/

#include <stdarg.h>
#include "includes/conversion_specifiers_array.h"
#include "includes/internal_functions.h"
#include "includes/base_lib.h"
#include <stdio.h>

void variables_handler(specifier_t specifiers, va_list ptr)
{
    for (int i = 0; i < 16; i++) {
        if (conversion_specifiers_array[i].convertion_specifier ==
            specifiers.conversion) {
            conversion_specifiers_array[i].ptr(ptr);
        }
    }
}

void my_printf(const char *format, ...)
{
    va_list ptr;
    char **specification;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            specifier_t specifiers = collect_flags(&format[i + 1]);
            variables_handler(specifiers, ptr);
            i++;
            continue;
        }
        my_putchar(format[i]);
    }
    va_end(ptr);
    //return nb_characters_printed;
}

int main(void)
{
    int test = 12;
    printf("%d\n", test);

    my_printf("%d\n", test);
}
