#include "main.h"
/**
 * print_octal - converts to octal
 * @val: variable parameter
 * Return: counter
*/
 int print_octal(va_list val)
 {
    int MJ, *array, counter = 0; 
    unsigned int no = va_arg(val, unsigned int);
    unsigned int tmpry = no;
    while (no / 8 != 0)
    {
        no = no / 8;
        counter++;
    }
    counter++;
    array = malloc(sizeof(int) * counter);
       for(MJ = 0; MJ < counter; MJ++)
    {
        array[MJ] = tmpry % 8;
        tmpry = tmpry / 8;
    }
    for(MJ = counter - 1; MJ >= 0; MJ--)
    _putchar(array[MJ] = '0');
    free(array);
    return(counter);
 }