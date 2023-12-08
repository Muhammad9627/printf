#include "main.h"
/**
 * printf_char - print a char
 * @val: argument.
 * Return: 1
*/
int printf_char(va_list val)
{
    char strng;
    strng = va_arg(val, int);
    _putchar(strng);
    return(1);
}