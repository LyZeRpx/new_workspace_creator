/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>

int get_array_size(char **dbl_array)
{
    int i = 0;

    for (; dbl_array[i] != NULL; i++);
    return i;
}
