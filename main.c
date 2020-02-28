/*
** EPITECH PROJECT, 2020
** duo_stumper
** File description:
** duo_stumper
*/

#include "include/my.h"
#include "include/fractal.h"
#include <stddef.h>

int check_error(int ac, char **av)
{
    int tmp = 0;

    if (ac != 4)
        return 84;
    if (my_strlen(av[1]) != 1)
        return 84;
    if (av[1][0] < '0' || av[1][0] > '3')
        return 84;
    for (int i = 0; i < my_strlen(av[2]); i++) {
        if (av[2][i] == '#' || av[2][i] == '@' || av[2][i] == '.')
            tmp++;
        else
            return 84;
    }
    for (int i = 0; i < my_strlen(av[3]); i++) {
        if (av[3][i] == '#' || av[3][i] == '@' || av[3][i] == '.')
            tmp++;
        else
            return 84;
    }
    return 0;
}

int check_error_next(char **str1, char **str2)
{
    int len = 0;

    len = my_strlen(str1[0]);
    for (int i = 1; str1[i] != NULL; i++) {
        if (len != my_strlen(str1[i]))
            return 84;
    }
    for (int i = 1; str2[i] != NULL; i++) {
        if (len != my_strlen(str2[i]))
            return 84;
    }
    return 0;
}

int main(int ac, char **av)
{
    int res = 0;

    res = check_error(ac, av);
    if (res == 84)
        return(84);
    res = fractal(av);
    if (res == 84)
        return (84);
    return 0;
}
