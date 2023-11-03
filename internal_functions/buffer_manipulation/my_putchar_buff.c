/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_putchar_buff.c
*/

#include "../../includes/base_lib.h"

void my_putchar_buff(char a, char *buffer)
{
    buffer[my_strlen(buffer)] = a;
}
