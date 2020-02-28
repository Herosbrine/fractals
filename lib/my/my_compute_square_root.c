/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** return square root
*/

int my_compute_square_root( int nb)
{
    int i = 1;

    while (i * i <= nb) {
        if ( i * i == nb )
            return i;
        else i++;
    }
    return 0;
}
