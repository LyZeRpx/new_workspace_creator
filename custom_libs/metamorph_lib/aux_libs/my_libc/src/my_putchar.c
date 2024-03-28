/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

#include <unistd.h>
#include "my_string.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
