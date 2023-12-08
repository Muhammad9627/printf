#include "main.h"

/**
 * print_s - print ex string
 * @val: value
 * Return: number of character print
 */
int print_s(va_list val)
{
    char *s;
    int i, len = 0;
    int value;

    s = va_arg(val, char *);
    if (s == NULL)
        s = "(null)";

    for (i = 0; s[i] != '\0'; i++)
    {
        switch (s[i] < 32 || s[i] >= 127)
        {
            case 1:
                _putchar('\\');
                _putchar('x');
                len = len + 2;
                value = s[i];
                if (value < 16)
                {
                    _putchar('0');
                    len++;
                }
                len = len + print_HEXA(value);
                break;

            case 0:
                _putchar(s[i]);
                len++;
                break;
        }
    }

    return (len);
}
