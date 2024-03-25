/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

#include "my_string.h"

char *strcut(char *str, char cut_at)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == cut_at) {
            str[i] = '\0';
        }
    }
    return str;
}
