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

void fract_three_nextc(int size, char **str1, char **str2)
{
    for (int i = 0; i < size; i++) {
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
        }
        for (int a = 0; a < size; a++) {
            my_putstr(str2[i]);
        }
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
        }
        my_putchar('\n');
    }
    for (int a = 0; a < size; a++) {
        for (int i = 0; i < size * size; i++)
            my_putstr(str1[a]);
        my_putchar('\n');
    }
    fract_three_nextd(size, str1, str2);
}

void fract_three_nextd(int size, char **str1, char **str2)
{
    for (int i = 0; str1[i] != NULL; i++) {
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
            my_putstr(str2[i]);
            my_putstr(str1[i]);
        }
        my_putchar('\n');
    }
    for (int a = 0; a < size; a++) {
        for (int i = 0; i < size * size; i++)
            my_putstr(str1[a]);
        my_putchar('\n');
    }
}

void fract_three_nexta(int size, char **str1, char **str2)
{
    for (int a = 0; a < size; a++) {
        for (int i = 0; i < size * size; i++)
            my_putstr(str1[a]);
        my_putchar('\n');
    }
    for (int i = 0; i < size; i++) {
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
        }
        for (int a = 0; a < size; a++) {
            my_putstr(str2[i]);
        }
        for (int a = 0; a < size; a++) {
            my_putstr(str1[i]);
        }
        my_putchar('\n');
    }
    fract_three_nextb(size, str1, str2);
}

void fract_three_nextb(int size, char **str1, char **str2)
{
    for (int i = 0; str1[i] != NULL; i++) {
        my_putstr(str1[i]);
        my_putstr(str2[i]);
        my_putstr(str1[i]);
        for (int a = 0; a < size; a++)
            my_putstr(str2[i]);
        my_putstr(str1[i]);
        my_putstr(str2[i]);
        my_putstr(str1[i]);
        my_putchar('\n');
    }
    fract_three_nextc(size, str1, str2);
}

int fract_three(char *argv1, char *argv2)
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
    fract_three_next(str1, str2);
    return (0);
}
