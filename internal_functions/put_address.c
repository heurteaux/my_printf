/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** put_address.c
*/

#include <stdio.h>
#include "../includes/base_lib.h"

void my_put_address(void *to_print)
{
    unsigned long test = (long)to_print;

    my_put_nbr_base(test, "0123456789abcdef");
}

/*int main(void)
{
    int test = 39;
    printf("%d\n", (int)sizeof(void *));
    my_put_address(&test);
    my_putchar('\n');
    printf("%x\n", (long)&test);
    printf("%p\n", &test);
}*/
