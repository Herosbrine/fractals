/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** string return int ( tab -> 0(first) 1(last) 2(i) 3(neg) 4 (ok)
*/

int is_digit(char a)
{
    int o = 0;

    if (a >= '0' && a <= '9')
        o = 1;
    return o;
}

int my_getnbr(char *str)
{
    int nb = 0;
    int i = 0;
    int isneg = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-' && is_digit(str[i+1]))
            isneg *= -1;
        i++;
    }
    while (str[i]) {
        if (is_digit(str[i])) {
            nb *= 10;
            nb += str[i] - '0';
            i++;
        } else {
            return (nb * isneg);
        }
    }
    return (nb * isneg);
}
