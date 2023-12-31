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
    
    if (s == NULL || val == NULL)
        return (-1);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < 32 || s[i] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            len = len + 2;
            value = s[i];
            if (value < 16)
            {
                _putchar('0');
                len++;
            }
            len = len + print_HEXA(val);
        }
        else
        {
            _putchar(s[i]);
            len++;
        }
    }

    return (len + 1);
}
