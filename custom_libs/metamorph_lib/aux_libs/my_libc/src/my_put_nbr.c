/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_nbr.c
*/

#include <stdio.h>
#include "my_string.h"

int my_put_nbr(int nb)
{
    int i = 0;
    int count = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
        count++;
    }
    if (nb < 10) {
        my_putchar(nb + 48);
        count++;
    } else {
        count += my_put_nbr(nb / 10);
        i = (nb % 10);
        my_putchar(i + 48);
        count++;
    }
    return count;
}
