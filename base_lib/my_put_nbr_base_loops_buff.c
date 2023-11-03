/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task6
*/

#include "../includes/base_lib.h"
#include "../includes/internal_functions.h"

static int get_diviseur(int len, int base)
{
    int a = 1;

    for (int i = 0; i < len - 1; i++)
        a *= base;
    return a;
}

void for_positive_b_buff(
    unsigned long long nb, int arg_length, char *base_str, char *buffer)

{
    long int result_holder = 0;
    int base = my_strlen(base_str);

    for (int i = 0; i < arg_length; i++) {
        result_holder = nb / get_diviseur(arg_length - i, base) % base;
        my_putchar_buff(base_str[result_holder], buffer);
    }
}

void for_negative_b_buff(
    unsigned long long int nb, int arg_length, char *base_str, char *buffer)
{
    long int result_holder = 0;
    int bs = my_strlen(base_str);

    for (int i = 0; i < arg_length; i++) {
        result_holder = (nb * (-1)) / get_diviseur(arg_length - i, bs) % bs;
        my_putchar_buff(base_str[result_holder], buffer);
    }
}
