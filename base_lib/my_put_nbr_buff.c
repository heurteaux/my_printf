/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** displays a given int
*/

#include <unistd.h>
#include "../includes/base_lib.h"
#include "../includes/internal_functions.h"

int my_put_nbr_buff(int nb_origin, char *buffer)
{
    int arg_length = int_length(nb_origin);
    long result_holder = 0;
    long nb = nb_origin;

    if (nb == 0) {
        my_putchar_buff('0', buffer);
        return 0;
    }
    if (nb > 0) {
        for_positive_buff(nb, arg_length, result_holder, buffer);
    } else if (nb < 0) {
        write(1, "-", 1);
        for_negative_buff(nb, arg_length, result_holder, buffer);
    }
    return 84;
}

// void main(void) {
//   my_put_nbr(214748369);
//}
