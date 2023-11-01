/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** main_dev.c
*/

#include "includes/main_dev.h"
#include <stdio.h>

int main(void)
{
    double test = 213091.19283210391839;
    printf("Sample text %e sample text\n", test);
    my_printf("Sample text %e sample text\n", test);
}
