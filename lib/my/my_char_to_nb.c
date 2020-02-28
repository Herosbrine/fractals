/*
** EPITECH PROJECT, 2019
** char to nb
** File description:
** char to nb
*/

#include "my.h"

int char_to_number(char *str)
{
    int num = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        num = num * 10 + str[i] - '0';
    return num;
}