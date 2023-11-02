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
    double test = 29392382939.9;

    printf("Sample text %g sample text\n", test);
    my_printf("Sample text %g sample text\n", test);
}
