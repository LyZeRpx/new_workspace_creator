/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

char *cut_str_at_char(char *str, char limiter)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == limiter) {
            str[i] = '\0';
        }
    }
    return str;
}
