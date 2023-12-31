#include "main.h"
#include <stdlib.h>

/**
 * print_octal - converts to octal
 * @val: variable parameter
 * Return: counter
*/
int print_octal(va_list val)
{
	int MJ, *array, counter;
	unsigned int no;
	unsigned int tmpry;

	counter = 0;
	no = va_arg(val, unsigned int);
	tmpry = no;

	if (no == 0)
	{
		_putchar('0');
		return (1);
	}

	while (no != 0)
	{
		no = no / 8;
		counter++;
	}
	
	array = malloc(sizeof(int) * counter);
	no = tmpry;
	
	for (MJ = 0; MJ < counter; MJ++)
	{
		array[MJ] = tmpry % 8;
		tmpry = tmpry / 8;
	}

	for (MJ = counter - 1; MJ >= 0; MJ--)
		_putchar(array[MJ] + '0');

	free(array);
	return (counter);
}
