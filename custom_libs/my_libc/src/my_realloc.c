/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "my_string.h"

void *my_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void *new_array = malloc(new_size);

    for (size_t i = 0; i < old_size; i++) {
        ((char *) new_array)[i] = ((char *) ptr)[i];
    }
    free(ptr);
    return new_array;
}
