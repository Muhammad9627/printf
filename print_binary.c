#include "main.h"

/**
 * print_binary - converts numbers to binary
 * @val: argument
 * Return: integer
*/
int print_binary(va_list val)
{
    int flag = 0;
    int reg = 0;
    int MJ, M = 1, J;
    unsigned int no = va_arg(val, unsigned int);
    unsigned int p;

    for (MJ = 0; MJ < 32; MJ++)
    {
        p = ((M << (32 - MJ)) & no);

        switch (p >> (31 - MJ))
        {
            case 1:
                flag = MJ;
                break;

            default:
                break;
        }

        if (flag)
        {
            J = p >> (31 - MJ);
            _putchar(J + 48);
            reg++;
        }
    }

    if (reg == 0)
    {
        reg++;
        _putchar('0');
    }

    return (reg);
}
