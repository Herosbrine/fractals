/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Compare two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i]) {
        if (s1[i] < s2[i])
            return -1;
        if (s2[i] < s1[i])
            return 1;
        i++;
    }
    if (!s1[i] && !s2[i]) {
        return 0;
    } else if (s1[i]) {
        return 1;
    } else {
        return -1;
    }
}