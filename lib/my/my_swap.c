/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swap content of two integer
*/

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
