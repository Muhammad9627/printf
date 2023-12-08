#include "main.h"

/**
 * print_rot13 - convert to rot13
 * @args: arguments
 * Return: counter
 */
int print_rot13(va_list args)
{
    int M, J, counter = 0;
    int k = 0;
    char *s = va_arg(args, char*);
    char MJ[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char JM[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

    if (s == NULL)
        s = "(null)";

    for (M = 0; s[M]; M++)
    {
        k = 0;
        for (J = 0; MJ[M] && !k; J++)
        {
            switch (s[M] == MJ[J])
            {
                case 1:
                    _putchar(JM[J]);
                    counter++;
                    k = 1;
                    break;
            }
        }
        if (!k)
        {
            _putchar(s[M]);
            counter++;
        }
    }

    return (counter);
}
