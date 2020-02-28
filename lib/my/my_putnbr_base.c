/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** convert decimal number in other base
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_revstr(char *str);

char *my_putnbr_base(int nbr, char const *base_to)
{
    int base;
    int i;
    char *converted;

    i = 0;
    base = my_strlen(base_to);
    converted = malloc(nbr * 32);
    while (nbr != 0) {
        if ((nbr % base) < 10) {
            converted[i] = (nbr % base) + 48;
        } else {
            converted[i] = (nbr % base) + 55;
        }
        i = i + 1;
        nbr = nbr / base;
    }
    my_revstr(converted);
    return (converted);
}