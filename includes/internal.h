/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** internal.h
*/

#pragma once

int sum_numbers(int n, ...);

int sum_strings_length(int n, ...);

void disp_stdarg(char *s, ...);

void display_and_count_char(char to_print, int *count);

void display_and_count_nbr(int nbr, int *count);

void display_and_count_string(char *str, int *count);
