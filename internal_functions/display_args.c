/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** display_args.c
*/

#include "includes/bsprintf.h"

void display_and_count_char(char to_print, int *count)
{
    my_putchar(to_print);
    *count += 1;
}

void display_and_count_nbr(int nbr, int *count)
{
    my_put_nbr(nbr);
    *count += int_length(nbr);
    if (nbr <= 0)
        *count += 1;
}

void display_and_count_string(char *str, int *count)
{
    my_putstr(str);
    *count += my_strlen(str);
}
