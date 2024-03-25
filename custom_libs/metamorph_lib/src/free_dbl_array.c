/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

#include <stdlib.h>
#include <stddef.h>

void free_dbl_array(char **dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        free(dbl_array[i]);
    }
    free(dbl_array);
}
