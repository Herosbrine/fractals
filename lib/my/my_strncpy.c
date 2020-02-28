/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copie n char of a string into another
*/

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (i; src[i] != '\0' && (i < n); i++)
        dest[i] = src[i];
    for (i; i < n; i++)
        dest[i] = '\0';
    return dest;
}