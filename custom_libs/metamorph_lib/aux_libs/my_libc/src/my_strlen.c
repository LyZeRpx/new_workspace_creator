/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
