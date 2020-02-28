/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** check if str only contains loweralpha
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (!str[0])
        return 1;
    while (str[i] != '\0') {
        if (str[i] < ' ' || str[i] == 127)
            return 0;
        i++;
    }
    return 1;
}