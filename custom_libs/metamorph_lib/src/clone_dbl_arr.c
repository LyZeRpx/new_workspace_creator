/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libmeta.h"

char **clone_dbl_arr(char **to_clone)
{
    int i = 0;
    size_t size = get_array_size(to_clone);
    char **clone;

    clone = malloc(sizeof(char *) * (size + 1));
    for (; to_clone[i] != NULL; i++) {
        clone[i] = my_strdup(clone[i], to_clone[i]);
    }
    return clone;
}
