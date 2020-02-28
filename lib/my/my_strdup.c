/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** copy a str with malloc
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *ptr;
    int i = 0;

    ptr = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i]) {
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}