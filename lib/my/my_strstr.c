/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** reproduce my_strstr function
*/

#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    if (to_find[0] == '\0') {
        return str;
    }
    while (to_find[i]) {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
        i++;
    }
    return str;
}