#include "main.h"

/**
 * print_HEXA - converts to HEXADECIMAL
 * @val: variable parameter
 * Return: counter
 */
int print_HEXA(va_list val)
{
    int i, counter = 0;
    int *array;
    unsigned int no = va_arg(val, unsigned int);
    unsigned int tmpry = no;

    while (no / 16 != 0)
    {
        no = no / 16;
        counter++;
    }

    counter++;
    array = malloc(sizeof(int) * counter);
    // if (array == NULL)
    // return(NULL);

    for (i = 0; i < counter; i++)
    {
        array[i] = tmpry % 16;
        tmpry = tmpry / 16;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        switch (array[i])
        {
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                array[i] = array[i] + 7;
                break;
            default:
                break;
        }

        _putchar(array[i] + '0');
    }

    free(array);
    return (counter);
}
