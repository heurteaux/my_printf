/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** string_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/string_cases_array.h"

static void plus_width_handling(int width, char *buffer, char *flags)
{
    char padding = ' ';
    int output_length = my_strlen(buffer);

    if (is_flag_present(flags, '0'))
        padding = '0';
    if (is_flag_present(flags, '+') && padding == '0')
        output_length++;
    for (int i = output_length; i < width; i++) {
        my_putchar(padding);
    }
}

static void minus_width_handling(int width, char *buffer)
{
    char padding = ' ';
    int output_length = my_strlen(buffer);

    for (int i = output_length; i < width; i++) {
        my_putchar_buff(padding, buffer);
    }
}

void string_handling(va_list ptr, specifier_t specifiers, char *buffer)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(
                string_cases_array[i].length_specifier, specifiers.length, 2)
            == 0) {
            string_cases_array[i].ptr(ptr, buffer);
        }
    }
    if (specifiers.width > 0 && !is_flag_present(specifiers.flags, '-'))
        plus_width_handling(specifiers.width, buffer, specifiers.flags);
    if (specifiers.width > 0 && is_flag_present(specifiers.flags, '-'))
        minus_width_handling(specifiers.width, buffer);
}
