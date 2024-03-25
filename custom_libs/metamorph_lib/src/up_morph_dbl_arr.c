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
#include "my_string.h"

char **up_morph_dbl_arr(char **progenitor, size_t extend, char *extention)
{
    static int i = 0;
    size_t size = get_array_size(progenitor) + extend;
    char **morph;

    morph = malloc(sizeof(char *) * (size + 1));
    for (; progenitor[i] != NULL; i++) {
        morph[i] = my_strdup(morph[i], progenitor[i]);
    }
    morph[i] = my_strdup(morph[i], extention);
    return morph;
}
