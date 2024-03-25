/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_string.h
*/

#ifndef LIB_META_H
    #define LIB_META_H

    #include <stdarg.h>
    #include <stddef.h>

char **clone_dbl_arr(char **to_clone);
int my_nstrncmp(char *str1, char *str2, int count_from, int n_th_char);
int count_target(char *str, char to_count);
int return_index_from_delim(char **env, char *delim);
char *return_line_from_delim(char **env, char *delim);
void free_dbl_array(char **dbl_array);
int get_array_size(char **ptr);
int mini_printf(char const *format, ...);
void print_dbl_array(char **env);

#endif /* my_string_H */
