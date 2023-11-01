/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** nb_len.c
*/

#include "../../includes/base_lib.h"

int nb_len(const char *format)
{
    int count = 0;

    for (int i = 0; is_digit(format[i]) && format[i] != '\0'; i++) {
        count++;
    }
    return count;
}
