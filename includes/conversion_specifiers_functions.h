/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** conversion_specifiers.h
*/

#pragma once
#include <stdarg.h>

void integer_handling(va_list ptr, specifier_t specifiers, char *buffer);

void float_handling(va_list ptr, specifier_t specifiers, char *buffer);

void octal_handling(va_list ptr, specifier_t specifiers, char *buffer);

void unsigned_integer_handling(
    va_list ptr, specifier_t specifiers, char *buffer);

void hex_handling(va_list ptr, specifier_t specifiers, char *buffer);

void maj_hex_handling(va_list ptr, specifier_t specifiers, char *buffer);

void scientific_handling(va_list ptr, specifier_t specifiers, char *buffer);

void maj_scientific_handling(
    va_list ptr, specifier_t specifiers, char *buffer);

void percent_handling(va_list ptr, specifier_t specifiers, char *buffer);

void mem_address_handling(va_list ptr, specifier_t specifiers, char *buffer);

void string_handling(va_list ptr, specifier_t specifiers, char *buffer);

void char_handling(va_list ptr, specifier_t specifiers, char *buffer);

void ox_hex_handling(va_list ptr, specifier_t specifiers);

void float_mixed_handling(va_list ptr, specifier_t specifiers, char *buffer);

void float_maj_mixed_handling(
    va_list ptr, __attribute__((unused)) specifier_t specifiers, char *buffer);

void binary_handling(va_list ptr, specifier_t specifiers, char *buffer);
