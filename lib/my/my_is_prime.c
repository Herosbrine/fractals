/*
** EPITECH PROJECT, 2019
** my_is_prime.c
** File description:
** return if nb is prime
*/

int squarer(int n)
{
    int i = 1;

    while (i * i <= n) {
        if (i * i == n)
            return i;
        else i++;
    }
    return i;
}

int my_is_prime(int nb)
{
    int a;
    int i = 2;

    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    a = squarer(nb);
    while (i <= a) {
        if (!(nb%i))
            return 0;
        else
            i++;
    }
    return 1;
}