/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** specifiers_collection.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../includes/base_lib.h"
#include "../../includes/internal_data_structures.h"
#include "../../includes/internal_functions.h"
#include "../../includes/specifiers_manipulation.h"

static specifier_t collect_conversion_specifier(
    const char *format, specifier_t specifier)
{
    specifier.conversion = format[0];
    return specifier;
}

static specifier_t collect_length_specifier(
    const char *format, specifier_t specifier)
{
    int character_increment = 0;
    char *length_modifiers[] = {
        "hh", "h", "ll", "l", "L", "q", "j", "z", "t", NULL};

    for (int i = 0; length_modifiers[i] != NULL; i++) {
        if (my_strncmp(
                format, length_modifiers[i], my_strlen(length_modifiers[i]))
            == 0) {
            specifier.length = length_modifiers[i];
            character_increment = my_strlen(specifier.length);
            break;
        }
    }
    return collect_conversion_specifier(
        &format[character_increment], specifier);
}

static specifier_t collect_precision_specifier(
    const char *format, specifier_t specifier)
{
    int character_increment = 0;

    if (format[0] == '.') {
        specifier.precision = my_getnbr(&format[1]);
        character_increment = get_precision_length(format);
    }
    return collect_length_specifier(&format[character_increment], specifier);
}

static specifier_t collect_field_width_specifier(
    const char *format, specifier_t specifier)
{
    int nb_length = 0;

    if (is_digit(format[0])) {
        nb_length = nb_len(format);
        specifier.width = my_getnbr(format);
    }
    return collect_precision_specifier(&format[nb_length], specifier);
}

specifier_t collect_flags(const char *format)
{
    specifier_t specifier = new_specifier();
    char *flags = malloc(sizeof(char) * 5);
    int i = 0;

    for (; is_flag(format[i]) && i < 5; i++) {
        flags[i] = format[i];
    }
    specifier.flags = flags;
    return collect_field_width_specifier(&format[i], specifier);
}
