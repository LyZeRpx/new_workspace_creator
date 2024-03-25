/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"

void get_flag(char flag, va_list arg)
{
    if (flag == 's') {
        my_putstr(va_arg(arg, char *));
    }
    if (flag == 'd' || flag == 'i') {
        my_put_nbr(va_arg(arg, int));
    }
    if (flag == 'c') {
        my_putchar(va_arg(arg, int));
    }
}

int mini_printf(char const *format, ...)
{
    va_list arg;
    int i = 0;

    va_start(arg, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else {
            i++;
            get_flag(format[i], arg);
        }
    }
    return 0;
}
