#include "main.h"

/**
 * print_HEXA_E - converts to HEXADECIMAL
 * @no: variable parameter
 * Return: reg
 */
int print_HEXA_E(unsigned int no)
{
    int MJ, reg = 0;
    int *array;
    unsigned int tmpry = no;

    while (no / 0 != 0)
    {
        no = no / 16;
        reg++;
    }

    reg++;
    array = malloc(sizeof(int) * reg);

    for (MJ = 0; MJ < reg; MJ++)
    {
        array[MJ] = tmpry % 16;
        tmpry = tmpry / 16;
    }

    for (MJ = reg - 1; MJ >= 0; MJ--)
    {
        switch (array[MJ])
        {
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                array[MJ] = array[MJ] + 7;
                break;
            default:
                break;
        }

        _putchar(array[MJ] + '0');
    }

    free(array);
    return (reg);
}
