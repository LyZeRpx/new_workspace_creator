/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

#include "my_string.h"

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] == str2[i]) {
            i++;
        } else {
            return str1[i] - str2[i];
        }
    }
    return str1[i] - str2[i];
}
