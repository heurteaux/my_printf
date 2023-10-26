/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal_data_structure.h
*/

#include <stdarg.h>
#include "includes/internal_data_structures.h"
#include "includes/base_lib.h"

void variables_handler(const char *str, int i, va_list ptr, int *count)
{
    for (int n = 0; n < 8; n++) {
        if (str[i + 1] == array[n].flag) {
            array[n].ptr(ptr, count);
            break;
        }
    }
}

int is_valid_variable_call(const char *to_test)
{
    char test_target_characters[2] = {to_test[0], to_test[1]};
    char *valid_params_array = "dicfesouxp%";

    if (test_target_characters[1] == 'd' || test_target_characters[1] == 'f') {
        switch (test_target_characters[0]) {
            case 'l':
            case 'L':
                return 1;
            default:
                return 0;
        }
    }
    for (int i = 0; valid_params_array[i] != '\0'; i++) {
        if (valid_params_array[i] == test_target_characters[0])
            return 1;
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list ptr;
    int nb_characters_printed = 0;

    va_start(ptr, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && is_valid_variable_call(&format[i + 1]) == 0)
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

/*int main(void)
{
    int test = 23761;
    int caca = my_printf("caca %p tests test\n", &test);
    my_printf("%d\n", caca);
}*/
