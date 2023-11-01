/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** is_flag_present.c
*/

#include <stdbool.h>

bool is_flag_present(char *flags, char a)
{
    for (int i = 0; flags[i] != '\0'; i++) {
        if (flags[i] == a)
            return true;
    }
    return false;
}
