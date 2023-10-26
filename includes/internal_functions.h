/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** bsprintf.h
*/

#include <stdarg.h>

#pragma once

int sum_numbers(int n, ...);

int sum_strings_length(int n, ...);

void disp_stdarg(char *s, ...);

void display_and_count_char(va_list to_print, int *count);

void display_and_count_nbr(va_list nbr, int *count);

void display_and_count_string(va_list str, int *count);

void display_and_count_address(va_list ptr, int *count);

void
display_and_count_percent(__attribute__((unused)) va_list ptr, int *count);

void display_and_count_hex(va_list ptr, int *count);

void display_and_count_octal(va_list ptr, int *count);

void my_put_address(void *to_print, int *count);
