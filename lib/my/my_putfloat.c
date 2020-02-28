/*
** EPITECH PROJECT, 2019
** my_putfloat.c
** File description:
** afficher le float en parametre
*/

void my_putchar(char c);

int my_put_nbr(int nb);

int my_compute_power_rec(int nb, int p);

int my_putfloat(float a, int n)
{
    int intpart = (int)a;
    float flpart;

    my_put_nbr(intpart);
    flpart = a - intpart;
    flpart *= my_compute_power_rec(10, n);
    intpart = (int)flpart;
    my_putchar('.');
    my_put_nbr(intpart);
    if (intpart == 0) {
        for (int i = 1; i <= n - 1; i++)
            my_putchar('0');
    }
    return 0;
}