/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** puts firsts letters of words in upcase
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (!str[0])
        return 1;
    while (str[i] != '\0') {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
            return 0;
        i++;
    }
    return 1;
}