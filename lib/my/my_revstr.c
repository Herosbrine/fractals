/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** reverse a string
*/

int my_slen(char const *str)
{
    int i = 0;

    while ( str[i] != '\0' ) {
        i++;
    }
    return i;
}

char *my_revstr(char *str)
{
    int len;
    int tmp;

    len = my_slen(str) - 1;
    for (int i = 0; i <= len / 2; i++) {
        tmp = str[i];
        str[i] = str[len - i];
        str[len - i] = tmp;
    }
    return str;
}