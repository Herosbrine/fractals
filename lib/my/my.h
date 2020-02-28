/*
** EPITECH PROJECT, 2019
** Libmy
** File description:
** header
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_putnbr_base(int nbr, char const *base);
int my_getnbr_base(char const *str, char const *base);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);
int squaret(int n);
int primer(int a);
int leng(char const *base);
int calcul(char const *str, char const *base);
int is_digit(char a);
int squarer(int n);
int my_slen(char const *str);
int is_alphanum(char c);
int counter_word(char const *str);
int my_wordlen(char const *str, int i);
char upcase(char a);
char *my_strdup(char const *src);
int my_putfloat(float a, int n);
int my_nbrlen(int num);
int my_atoi(char const *str);
int is_num(char c);
int char_to_number(char *str);

typedef struct data
{
    int *tab;
    int line;
    int matches;
    int last_line;
}data_t;

#endif /* MY_H_ */