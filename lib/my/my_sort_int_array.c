/*
** EPITECH PROJECT, 2019
** my_sort_int_array.c
** File description:
** Sorting int array
*/

void my_sort_int_array(int *array, int size)
{
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] < array[i-1]) {
            array[i] = array[i] + array[i - 1];
            array[i - 1] = array[i] - array[i - 1];
            array[i] = array[i] - array[i - 1];
            i = 0;
        }
    }
}
