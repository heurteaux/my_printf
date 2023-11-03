/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** displays a given int
*/

#include "../includes/base_lib.h"
#include "../includes/internal_functions.h"

int my_put_nbr_base_buff(
    unsigned long long nb_origin, char *base_str, char *buffer)
{
    int base = my_strlen(base_str);
    int arg_length = int_base_length(nb_origin, base);
    long int nb = nb_origin;

    if (nb == 0) {
        my_putchar_buff('0', buffer);
        return 0;
    }
    if (nb > 0) {
        for_positive_b_buff(nb, arg_length, base_str, buffer);
    } else if (nb < 0) {
        my_putchar_buff('-', buffer);
        for_negative_b_buff(nb, arg_length, base_str, buffer);
    }
    return 84;
}

/*void main(void) {
    my_put_nbr_base(0, "0123456789ABCDEF");
}*/
