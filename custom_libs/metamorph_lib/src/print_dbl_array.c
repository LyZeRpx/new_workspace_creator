/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "my_string.h"

void print_dbl_array(char **dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        my_putstr(dbl_array[i]);
        my_putchar('\n');
    }
}
