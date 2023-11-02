/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** bsprintf.h
*/

#include <stdarg.h>
#include "internal_data_structures.h"
#include <stdbool.h>
#pragma once

void display_and_count_char(va_list to_print);

void display_and_count_nbr(va_list nbr);

void display_and_count_string(va_list str);

void display_and_count_address(va_list ptr);

void display_and_count_percent(__attribute__((unused)) va_list ptr);

void display_and_count_hex(va_list ptr);

void display_and_count_octal(va_list ptr);

void display_and_count_unsigned_short(va_list ptr);

void display_and_count_long_int(va_list ptr);

void my_put_address(void *to_print);

void display_double(double a);

void display_and_count_double(va_list ptr);

void display_and_count_long_double(va_list ptr);

void display_long_double(double a);

void display_float(double a);

void display_and_count_float(va_list ptr);

void display_scientific(double a);

void display_and_count_scientific_float(va_list ptr);

specifier_t collect_flags(const char *format);

int nb_len(const char *format);

void display_and_count_unsigned_nbr(va_list ptr);

void display_and_count_maj_hex(va_list ptr);

void display_maj_scientific(double a);

void display_and_count_maj_scientific_float(va_list ptr);

void display_and_count_ox_hex(va_list ptr);

void display_double_hex(double a);

bool is_flag_present(char *flags, char a);

void display_double_for_number(double a);

int find_zero(int i, double decimal_part);

void display_double_number(double a);

void float_mixed_handling(va_list ptr, __attribute__((unused)) specifier_t specifiers);
