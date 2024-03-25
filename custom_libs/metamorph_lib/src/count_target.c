/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

int count_target(char *str, char to_count)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_count) {
            count ++;
        }
    }
    return count;
}
