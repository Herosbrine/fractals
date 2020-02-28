/*
** EPITECH PROJECT, 2019
** nbr lenght
** File description:
** nbr lenght
*/

#include "my.h"

int my_nbrlen(int num)
{
    int count = 0;

    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}