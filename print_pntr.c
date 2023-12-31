#include "main.h"
/**
 * print_pntr - printing pointer
 * @val: value
 * Return: int
 */
int print_pntr(va_list val)
{
    void *p;
    char *s = "(nil)";
    long int a;
    int M, J;
    p = va_arg(val, void*);
    if (p == NULL)
    {
        for (M = 0; s[M] != '\0'; M++)
        {
            _putchar(s[M]);
        }
        return (M);
    }
    a = (unsigned long int)p;
    _putchar('0');
    _putchar('x');
    J = print_hex_ex(a);
    return (J + 2);
}
