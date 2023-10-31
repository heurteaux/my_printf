/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** function_array.h
*/

#pragma once
#include "internal_data_structures.h"
#include "conversion_specifiers_functions.h"

functions_t conversion_specifiers_array[20] = {
    {'d', integer_handling},
    {'i', integer_handling},
    {'f', float_handling},
    {'o', octal_handling},
    {'u', unsigned_integer_handling},
    {'x', hex_handling},
    {'X', maj_hex_handling},
    {'e', scientific_handling},
    {'E', maj_scientific_handling},
    {'F', float_handling},
    //{'a', ox_hex_handling},
    //{'A', ox_maj_hex_handling},
    {'c', char_handling},
    {'s', string_handling},
    {'p', mem_address_handling},
    {'%', percent_handling}
};
