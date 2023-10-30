/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** put_address.c
*/

#include "../includes/base_lib.h"

void my_put_address(void *to_print, int *count)
{
    unsigned long long_to_print = (unsigned long)to_print;
    unsigned long temp_chunk;

    my_putstr("0x");
    for (int i = 11; i >= 0; i--) {
        temp_chunk = (long_to_print >> ((i * 4)) & 0xF);
        my_put_nbr_base(temp_chunk, "0123456789abcdef");
        *count += 1;
    }
    *count += 2;
}

/*int main(void)
{
    int test = 39;
    my_put_address(&test);
    printf("%p", &test);
}*/
