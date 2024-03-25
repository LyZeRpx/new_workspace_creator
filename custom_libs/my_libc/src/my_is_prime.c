/*
** EPITECH PROJECT, 2023
** I AM...
** File description:
** OPTIMUM PRIDE
*/

#include <unistd.h>
#include <stdio.h>

int my_is_prime(int nb)
{
    if (nb == 0 || nb == 1) {
            return 1;
        }
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0) {
        return 1;
        }
    }
    return 0;
}
