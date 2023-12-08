#include "main.h"

/**
 * print_unsigned - prints unsigned integers
 * @args: argument to print
 * Return: numbers printed
 */
int print_unsigned(va_list args)
{
    unsigned int MJ = va_arg(args, unsigned int);
    int no, last = MJ % 10, digit, exp = 1;
    int M = 1;
    MJ = MJ / 10;
    no = MJ;

    while (no / 10 != 0)
    {
        exp = exp * 10;
        no = no / 10;
    }

    no = MJ;
    while (exp > 0)
    {
        digit = no / exp;
        _putchar(digit + '0');
        no = no - (digit * exp);
        exp = exp / 10;
        M++;
    }

    _putchar(last + '0');
    return M;
}
