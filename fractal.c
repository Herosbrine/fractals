/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** fractal.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "include/fractal.h"
#include "include/my.h"

int fract_one(char *argv)
{
    int i = 0;

    while (argv[i] != '\0') {
        if (argv[i] == '#')
            my_putchar('#');
        if (argv[i] == '@')
            my_putchar('\n');
        if (argv[i] == '.')
            my_putchar('.');
        i++;
    }
    my_putchar('\n');
    return (0);
}

void fract_two_next(char **str1, char **str2)
{
    for (int i = 0; str1[i] != NULL; i++) {
        my_putstr(str1[i]);
        my_putstr(str1[i]);
    	my_putchar('\n');
    }
    for (int i = 0; str1[i] != NULL; i++) {
        my_putstr(str1[i]);
        my_putstr(str2[i]);
        my_putchar('\n');
    }
}

int fract_two(char *argv1, char *argv2)
{
    int res = 0;
    char **str1 = NULL;
    char **str2 = NULL;

    str1 = malloc(sizeof(char *) * my_strlen(argv1) + 1);
    str2 = malloc(sizeof(char *) * my_strlen(argv2) + 1);
    for (int i = 0; i < my_strlen(argv1) + 1; i++)
        str1[i] = malloc(sizeof(char) * my_strlen(argv1));
    for (int i = 0; i < my_strlen(argv2) + 1; i++)
        str2[i] = malloc(sizeof(char) * my_strlen(argv2));
    str1 = my_str_to_word_array(argv1);
    str2 = my_str_to_word_array(argv2);
    res = check_error_next(str1, str2);
    if (res == 84)
        return 84;
    fract_two_next(str1, str2);
    return (0);
}

void fract_three_next(char **str1, char **str2)
{
    int size = 0;

    for (int i = 0; str1[i] != NULL; i++)
        size++;
    for (int a = 0; a < size; a++) {
        for (int i = 0; i < size * size; i++)
            my_putstr(str1[a]);
        my_putchar('\n');
    }
    for (int i = 0; str1[i] != NULL; i++) {
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
            my_putstr(str2[i]);
            my_putstr(str1[i]);
        }
        my_putchar('\n');
    }
    fract_three_nexta(size, str1, str2);
}

int fractal(char **argv)
{
    if (argv[1][0] == '0') {
        my_putstr("#\n");
        return (0);
    }
    if (argv[1][0] == '1') {
        fract_one(argv[2]);
        return (0);
    }
    if (argv[1][0] == '2') {
        if (fract_two(argv[2], argv[3]) == 84);
            return (84);
    }
    if (argv[1][0] == '3') {
        if (fract_three(argv[2], argv[3]) == 84)
            return 84;
    }
    return (0);
}
