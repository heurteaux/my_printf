/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_putstr_buff.c
*/

#include "../../includes/base_lib.h"

void my_putstr_buff(char *str, char *buffer)
{
    int count = my_strlen(buffer);

    for (int i = 0; str[i] != '\0'; i++) {
        buffer[count + i] = str[i];
    }
}
