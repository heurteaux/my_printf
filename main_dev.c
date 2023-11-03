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
    int test = 21391;

    printf("Sample text %+-10d sample text\n", test);
    my_printf("Sample text %+-10d sample text\n", test);
}
