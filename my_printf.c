/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** mini_printf.c
*/

#include <stdarg.h>
#include "includes/internal.h"
#include "includes/base_lib.h"

void variables_handler(const char *str, int i, va_list ptr, int *count)
{
    switch (str[i + 1]) {
        case 'c':
            display_and_count_char(va_arg(ptr, int), count);
            break;
        case 'i':
            display_and_count_nbr(va_arg(ptr, int), count);
            break;
        case 'd':
            display_and_count_nbr(va_arg(ptr, int), count);
            break;
        case 's':
            display_and_count_string(va_arg(ptr, char *), count);
            break;
        case '%':
            display_and_count_char('%', count);
            break;
        default:
            break;
    }
}

int is_valid_variable_call(char to_test)
{
    switch (to_test) {
        case 'd':
            return 1;
        case 'i':
            return 1;
        case 's':
            return 1;
        case 'c':
            return 1;
        case '%':
            return 1;
        default:
            return 0;
    }
}

int my_printf(const char *format, ...)
{
    va_list ptr;
    int nb_characters_printed = 0;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && is_valid_variable_call(format[i + 1]) == 0)
            continue;
        if (format[i] == '%') {
            variables_handler(format, i, ptr, &nb_characters_printed);
            i++;
            continue;
        }
        nb_characters_printed++;
        my_putchar(format[i]);
    }
    va_end(ptr);
    return nb_characters_printed;
}
