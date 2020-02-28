/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** create tab of word
*/

#include <stdlib.h>

int is_alphanum(char c)
{
    if (c == '#' || c == '.')
        return 1;
    return 0;
}

int counter_word(char const *str)
{
    int i = 0;
    int count  = 0;

    while (str[i]) {
        if (is_alphanum(str[i]) && !is_alphanum(str[i + 1]))
            count++;
        i++;
    }
    return count;
}

int my_wordlen(char const *str, int i)
{
    int count = 0;

    while (str[i]) {
        if (is_alphanum(str[i])) {
            count++;
            i++;
        } else {
            return count;
        }
    }
    return count;
}

char **my_str_to_word_array(char const *str)
{
    int j;
    int k = 0;
    char **ptr;
    int nbr_word;
    int word_len;

    nbr_word = counter_word(str);
    ptr = malloc(sizeof(char *) * (nbr_word + 1));
    for (int i = 0; i < nbr_word; i++) {
        while (!is_alphanum(str[k]))
            k++;
        word_len = my_wordlen(str, k);
        ptr[i] = malloc(sizeof(char) * (word_len + 1));
        for (j = 0; j < word_len; j++) {
            ptr[i][j] = str[k];
            k++;
        }
        ptr[i][j] = '\0';
    }
    ptr[nbr_word] = 0;
    return ptr;
}
