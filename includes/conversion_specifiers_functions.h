/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** conversion_specifiers.h
*/

#pragma once
#include <stdarg.h>

void integer_handling(va_list ptr, specifier_t specifiers);

void float_handling(va_list ptr, specifier_t specifiers);

void octal_handling(va_list ptr, specifier_t specifiers);

void unsigned_integer_handling(va_list ptr, specifier_t specifiers);

void hex_handling(va_list ptr, specifier_t specifiers);

void maj_hex_handling(va_list ptr, specifier_t specifiers);

void scientific_handling(va_list ptr, specifier_t specifiers);

void maj_scientific_handling(va_list ptr, specifier_t specifiers);

void percent_handling(va_list ptr, specifier_t specifiers);

void mem_address_handling(va_list ptr, specifier_t specifiers);

void string_handling(va_list ptr, specifier_t specifiers);

void char_handling(va_list ptr, specifier_t specifiers);

void ox_hex_handling(va_list ptr, specifier_t specifiers);

void float_mixed_handling(va_list ptr, specifier_t specifiers);
