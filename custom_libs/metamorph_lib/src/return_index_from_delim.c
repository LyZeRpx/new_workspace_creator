/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "my_string.h"


int return_index_from_delim(char **env, char *delim)
{
    int i = 0;
    int delim_len = my_strlen(delim);

    for (; env[i] != NULL; i++) {
        if (my_strncmp(env[i], delim, delim_len) == 0) {
            return i;
        }
    }
    return 0;
}
