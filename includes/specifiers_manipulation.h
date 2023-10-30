/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** specifiers_manipulation.h
*/

#pragma once
#include <stdbool.h>

int get_precision_length(const char *format);

bool is_flag(char a);

specifier_t new_specifier(void);
