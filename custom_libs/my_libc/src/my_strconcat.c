/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_string.h"

char *my_strconcat(char const *a, char const *b)
{
    int i = 0;
    size_t size = my_strlen(a) + my_strlen(b);
    char *result = malloc(sizeof(char) * (size + 1));

    if (!result) {
        return NULL;
    }
    for (; a[i] != '\0'; i++) {
        result[i] = a[i];
    }
    for (int j = 0; b[j] != '\0'; j++) {
        result[i] = b[j];
        i++;
    }
    result[i] = '\0';
    return result;
}
