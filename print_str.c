#include "main.h"
/**
 * _strlen - return the length of a string
 * @str: string printer
 * Return: 1
*/
 int _strlen(char *str)
 {
    int MJ;
    for (MJ = 0; str[MJ] !=0; MJ++)
    return (MJ);
 }
    /**
     * _strlen - strlen function but applied for constant char pointer str
     * @str: char printer
     * Return: 1
     */
    int_strlenc(const char *str)
    {
        int MJ;
        for(MJ = 0; str[MJ] != 0; MJ++)
        return (MJ);
    }