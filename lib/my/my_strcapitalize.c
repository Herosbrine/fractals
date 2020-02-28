/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** puts firsts letters of words in upcase
*/

char upcase(char a)
{
    if (a >= 'a' && a <= 'z')
        return a -= 32;
    else
        return a;
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while (str[i] != '\0') {
        if (str[i - 1] >= 32 && str[i - 1] <= 47)
            str[i] = upcase(str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}