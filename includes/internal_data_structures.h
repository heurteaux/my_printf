/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** internal_data_structures.h
*/

#pragma once
#include <stdarg.h>

typedef struct functions_s {
    char convertion_specifier;
    void (*ptr)(va_list);
} functions_t;

typedef struct specifiers_s {
    char *flags;
    int width;
    int precision;
    char *length;
    char conversion;
} specifier_t;

typedef struct lengths_specifiers_functions_s {
    char *length_specifier;
    void (*ptr)(va_list);
} length_specifiers_functions_t;
