/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** put_address.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/internal_functions.h"

void my_put_address(void *to_print, char *buffer)
{
    unsigned long long_to_print = (unsigned long)to_print;

    my_putstr_buff("0x", buffer);
    my_put_nbr_base_buff(long_to_print, "0123456789abcdef", buffer);
}

/*int main(void)
{
    int test = 39;
    my_put_address(&test);
    printf("%p", &test);
}*/
