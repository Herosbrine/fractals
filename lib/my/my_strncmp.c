/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** Compare n characters of two strings
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while ( i < n) {
        if (s1[i] < s2[i])
            return -1;
        if (s2[i] < s1[i])
            return 1;
        i++;
    }
    return 0;
}