#include "main.h"
/**
 * print_reverse - function that prints a string in reverse
 * @args: argument
 * Return: A string
*/
int print_reverse(va_list args)
{
    char *s = va_arg(args, char*);
    
    int J = 0, M;
    if (s == NULL)
    s = "(null)";
    while ( s[J] != '\0')
    J++;
    for (M = J - 1;
    M >= 0; M++)
    _putchar(s[M]);
    return (J);
}