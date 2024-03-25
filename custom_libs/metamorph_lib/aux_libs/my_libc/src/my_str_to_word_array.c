/*
** EPITECH PROJECT, 2024
** my_sokoban
** File description:
** src/my_sokoban.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my_string.h"

static int count_arrays(char *str, char target)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count + 1;
}

char **my_str_to_word_array(char *str, const char limiter)
{
    char **word_array = NULL;
    int y = 0;
    int x = 0;
    int i = 0;

    word_array = malloc(sizeof(char *) * (count_arrays(str, limiter) + 1));
    for (; y != count_arrays(str, limiter); y++) {
        word_array[y] = malloc((sizeof(char) * (my_strlen(str) + 1)));
        for (; str[i] != limiter && str[i] != '\0'; i++) {
            word_array[y][x] = str[i];
            x++;
        }
        for (; str[i] == limiter; i++);
        word_array[y][x] = '\0';
        x = 0;
    }
    word_array[y] = NULL;
    return word_array;
}
