/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** mem_address_handling.c
*/

#include "../../includes/base_lib.h"
#include "../../includes/conversions_arrays/mem_address_cases_array.h"

void mem_address_handling(va_list ptr, specifier_t specifiers, char *buffer)
{
    for (int i = 0; i < 1; i++) {
        if (my_strncmp(mem_address_cases_array[i].length_specifier,
                specifiers.length, 2)
            == 0) {
            mem_address_cases_array[i].ptr(ptr, buffer);
        }
    }
}
