/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** types_instancing .c
*/

#include "../../includes/internal_data_structures.h"

specifier_t new_specifier(void)
{
    specifier_t new_specifier;

    new_specifier.length = "";
    new_specifier.conversion = 0;
    new_specifier.width = 0;
    new_specifier.flags = "";
    new_specifier.precision = 0;
    return new_specifier;
}
