/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
