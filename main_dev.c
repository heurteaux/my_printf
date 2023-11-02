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
    double test = 29.8555555;

    printf("Sample text %g sample text\n", test);
    my_printf("Sample text %g sample text\n", test);
}
