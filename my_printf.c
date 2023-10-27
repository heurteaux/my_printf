/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal_data_structure.h
*/

#include <stdarg.h>
#include "includes/internal_data_structures.h"
#include "includes/base_lib.h"

static int check_flags(int e, const char *str, va_list ptr, int *count)
{
    for (int n = 0; n < 14; n++) {
        if (my_strncmp(str, array[n].flag, e) == 0) {
            array[n].ptr(ptr, count);
            return 1;
        }
    }
    return 0;
}

int variables_handler(const char *str, va_list ptr, int *count)
{
    int temp;
    for (int e = 3; e > 0; e--) {
        temp = check_flags(e, str, ptr, count);
        if (temp == 1)
            return e;
    }
    return 1;
}

int my_printf(const char *format, ...)
{
    va_list ptr;
    int nb_characters_printed = 0;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            variables_handler(&format[i + 1], ptr,
            &nb_characters_printed);
            i++;
            continue;
        }
        nb_characters_printed++;
        my_putchar(format[i]);
    }
    va_end(ptr);
    return nb_characters_printed;
}


/*int main(void)
{
    double nb = 200000;
    int exp = my_printf("%e\n", nb);
}*/
