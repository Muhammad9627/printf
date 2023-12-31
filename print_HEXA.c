
#include "main.h"

/**
 * print_HEXA - converts to HEXADECIMAL
 * @val: variable parameter
 * Return: counter
 */
int print_HEXA(va_list val)
{
    int i, counter = 0;
    unsigned int no = va_arg(val, unsigned int);
    unsigned int tmpry = no;
    int array[8];

    do
    {
	    array[counter++] = tmpry % 16;
	    tmpry /= 16;
    }
    while (tmpry != 0);

    for (i = counter - 1; i >= 0; i--)
    {
	    if (array[i] >= 10 && array[i] <= 15)
		    _putchar(array[i] + 'A' - 10);
	    else
		    _putchar(array[i] + '0');
    }
    return (counter);
}
