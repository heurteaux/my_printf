/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** display_args.c
*/

#include "../../includes/internal_functions.h"
#include "../../includes/base_lib.h"

void
display_and_count_percent(__attribute__((unused)) va_list to_print)
{
    my_putchar('%');
}

void display_and_count_char(va_list to_print)
{
    char to_display = va_arg(to_print, int);

    my_putchar(to_display);
}

void display_and_count_string(va_list ptr)
{
    char *to_print = va_arg(ptr, char *);

    my_putstr(to_print);
}

void display_and_count_address(va_list ptr)
{
    void *to_print = va_arg(ptr, void *);

    my_put_address(to_print);
}
