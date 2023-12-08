#include "main.h"
/**
 * print_integer - prints integers
 * @args: argument to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    int no, last = n % 10, digit, exp = 1;
    int MJ = 1;
    n = n / 10;
    no = n;

    if (last < 0)
    {
        _putchar('-');
        no = -no;
        last = -last;
        MJ++;
    }

    if (no > 0)
    {
        while (no / 10 != 0)
        {
            exp = exp * 10;
            no = no / 10;
        }
        no = n;

        while (exp > 0)
        {
            digit = no / exp;
            _putchar(digit + '0');
            no = no - (digit * exp);
            exp = exp / 10;
            MJ++;
        }
    }

    _putchar(last + '0');
    return (MJ);
}

#include "main.h"
/**
 * print_decimal - print decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list args)
{
    int n = va_arg(args, int);
    int no, last = n % 10, digit, exp = 1;
    int MJ = 1;

    n = n / 10;
    no = n;

    if (last < 0)
    {
        _putchar('-');
        no = -no;
        n = -n;
        last = -last;
        MJ++;
    }

    if (no > 0)
    {
        while (no / 10 != 0)
        {
            exp = exp * 10;
            no = no / 10;
        }
        no = n;

        while (exp > 0)
        {
            digit = no / exp;
            _putchar(digit + '0');
            no = no - (digit * exp);
            exp = exp / 10;
            MJ++;
        }
    }

    _putchar(last + '0');
    return (MJ);
}
