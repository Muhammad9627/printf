#include "main.h"
/**
 * prinf_string - print a string
 * @val: argument
 * Return: the length of string
*/
int printf_string(va_list val)
{
    char *str;
    int MJ;
    int length;
    str = va_arg(val,char *);
    if (str == NULL)
    {
        str = "(NULL)";
        for(MJ = 0; MJ < length; MJ++)
        _putchar(str[MJ]);
        return(length);
    }
    else
    {
        length = _strlen(str);
        for (MJ = 0; MJ < length; MJ++)
        _putchar(str[MJ]);
        return length;
    }
}