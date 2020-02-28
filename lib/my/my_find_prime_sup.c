/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** find the first prime number greater than nb
*/

int squaret(int n)
{
    int i = 1;

    while ( i * i <= n ) {
        if ( i * i == n )
            return i;
        else i++;
    }
    return i;
}

int primer(int a)
{
    int b;
    int i = 2;

    if (a < 2)
        return 0;
    if (a == 2)
        return 1;
    b = squaret(a);
    while (i <= b) {
        if (!(a%i))
            return 0;
        else
            i++;
    }
    return 1;
}

int my_find_prime_sup(int nb)
{
    while (primer(nb) == 0)
        nb++;
    return nb;
}
