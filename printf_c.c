#include "main.h"

/**
 * printf_c - choose right function to print
 * @format: identifier to look for
 * Return: length of string
 */
int _printf(const char *format, ...)
{
    match m[] = {
        {"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_dec},
        {"%i", print_int}, {"%r", print_reverse}, {"%R", print_rot13}, {"%b", print_binary},
        {"%u", print_unsigned}, {"%o", print_octal}, {"%x", print_hexadecimal},
        {"%X", print_HEXA}, {"%S", print_s}, {"%p", print_pntr}
    };

    va_list args;
    int M = 0, len = 0;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[M] != '\0')
    {
        if (format[M] == '%')
        {
            int j = 13;
            while (j >= 0)
            {
                if (m[j].id[0] == format[M] && m[j].id[1] == format[M + 1])
                {
                    len += m[j].f(args);
                    M += 2;
                    break;
                }
                j--;
            }
        }
        else
        {
            _putchar(format[M]);
            len++;
            M++;
        }
    }

    va_end(args);
    return len;
}
