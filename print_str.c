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
    {
	    /* loop through */
    }
    return (MJ);
 }
/**
 * _strlen - strlen function but applied for constant char pointer str
 * @str: char printer
 * Return: 1
 */
int _strlenc(const char *str)
{
        int MJ;
	for(MJ = 0; str[MJ] != 0; MJ++)
	{
		/* loop through */
	}
	return (MJ);
}
