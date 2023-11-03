/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task6
*/

#include "../includes/internal_functions.h"

static int get_diviseur(int len)
{
    int a = 1;

    for (int i = 0; i < len - 1; i++)
        a *= 10;
    return a;
}

void for_positive_buff(
    int nb, int arg_length, long result_holder, char *buffer)
{
    for (int i = 0; i < arg_length; i++) {
        result_holder = nb / get_diviseur(arg_length - i) % 10 + 48;
        my_putchar_buff((char) result_holder, buffer);
    }
}

void for_negative_buff(
    long nb, int arg_length, long result_holder, char *buffer)
{
    for (int i = 0; i < arg_length; i++) {
        result_holder = (nb * (-1)) / get_diviseur(arg_length - i) % 10 + 48;
        my_putchar_buff((char) result_holder, buffer);
    }
}
