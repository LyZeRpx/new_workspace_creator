/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_string.h
*/

#ifndef MY_STRING_H
    #define MY_STRING_H

    #include <stdarg.h>
    #include <stddef.h>


int mini_printf(char const *format, ...);
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
void *my_realloc(void *ptr, size_t old_size, size_t new_size);
char **my_str_to_word_array(char *str, const char limiter);
int my_strcmp(const char *str1, const char *str2);
int my_atoi(char const *str);
char *my_strconcat(char const *a, char const *b);
char *my_strdup(char *dest, char *src);
int my_strlen(char const *str);
int my_strncmp(char *str1, char *str2, int n_th_char);

#endif /* my_string_H */
