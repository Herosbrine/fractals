/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Concatenate n char of src to the end of dest
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i])
        i++;
    while (src[j] && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}