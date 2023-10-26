/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** base_lib.h
*/

#pragma once

int my_strlen(char const *str);

int my_put_nbr(int nb_origin);

void my_putchar(char a);

int my_putstr(char const *str);

void for_negative(long nb, int arg_length, long result_holder);

void for_positive(int nb, int arg_length, long result_holder);

int int_length(int a);

int my_put_nbr_base(unsigned long long nb_origin, char *base_str);

void for_positive_b(unsigned long long nb, int arg_length, long result_holder,
    char *base_str);

void for_negative_b(unsigned long long nb, int arg_length, long result_holder,
    char *base_str);

int int_base_length(int a, int base);
