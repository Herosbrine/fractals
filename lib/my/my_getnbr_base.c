/*
** EPITECH PROJECT, 2019
** my_getnbr_base
** File description:
** convert decimal number in other base
*/

int leng(char const *base)
{
    int i = 0;

    while (base[i])
        i++;
    return (i);
}

int calcul(char const *str, char const *base)
{
    int i;
    int j;
    int k = 1;
    int nbr = 0;

    i = leng(str) - 1;
    while (i >= 0) {
        j = 0;
        while (str[i] != base[j])
            j++;
        nbr += j * k;
        k *= leng(base);
        i--;
    }
    return nbr;
}

int my_getnbr_base(char const *str, char const *base)
{
    int i = 0;
    int neg = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-' && str[i + 1] > 47)
            neg = -1;
        i++;
    }
    str = &str[i];
    return calcul(str, base) * neg;
}