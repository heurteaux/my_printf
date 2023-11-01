/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** specifiers_manipulation.c
*/

#include "../../includes/base_lib.h"

int get_precision_length(const char *format)
{
    int count = 0;

    for (int i = 1; format[i] != '\0' && is_digit(format[i]); i++) {
        count++;
    }
    return count;
}

bool is_flag(char a)
{
    char *flags = "#0- +";

    for (int i = 0; flags[i] != '\0'; i++) {
        if (flags[i] == a) {
            return true;
        }
    }
    return false;
}
