#include "main.h"

/**
 * print_hex_ex - converts to hexadecimal
 * @no: variable parameter
 * Return: counter
 */
int print_hex_ex(unsigned long int no)
{
    long int MJ, counter = 0;
    long int *array;
    unsigned long int tmpry = no;

    while (no / 16 != 0)
    {
        no = no / 16;
        counter++;
    }

    counter++;
    array = malloc(sizeof(long int) * counter);

    for (MJ = 0; MJ < counter; MJ++)
    {
        array[MJ] = tmpry % 16;
        tmpry = tmpry / 16;
    }

    for (MJ = counter - 1; MJ >= 0; MJ--)
    {
        switch (array[MJ])
        {
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                array[MJ] = array[MJ] + 39;
                break;
            default:
                break;
        }

        _putchar(array[MJ] + '0');
    }

    free(array);
    return (counter);
}
