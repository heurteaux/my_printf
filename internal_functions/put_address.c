/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** put_address.c
*/

#include "../includes/base_lib.h"

void my_put_address(void *to_print)
{
    unsigned long long_to_print = (unsigned long)to_print;

    my_putstr("0x");
    my_put_nbr_base(long_to_print, "0123456789abcdef");
}

/*int main(void)
{
    int test = 39;
    my_put_address(&test);
    printf("%p", &test);
}*/
