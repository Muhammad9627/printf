#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>   /* Standard Input/Output functions */
#include <stdlib.h>  /* Standard General Utilities Library */
#include <stdarg.h>  /* Variable arguments handling */
#include <unistd.h>  /* Standard symbolic constants and types */
#include <limits.h>  /* Implementation-defined constants */

/* Struct to represent the format specifier and corresponding function */
typedef struct format
{
	char *id;         /* Format specifier (e.g., "c", "s", "d", etc.) */
	int (*f)();       /* Function pointer to the corresponding printing function */
} match;

int _putchar(char c);            /* Custom putchar function to write a character to stdout */
int _printf(const char *format, ...);  /* Custom printf function with variable arguments */

/* Functions for handling different format specifiers */
int printf_char(va_list val);    /* Handle the %c specifier */
int printf_string(va_list val);  /* Handle the %s specifier */
int print_37(void);              /* Handle the %% specifier */
int print_int(va_list args);     /* Handle the %d specifier */
int print_dec(va_list args);     /* Handle the %i specifier */
int print_binary(va_list val);   /* Handle the %b specifier */
int print_unsigned(va_list args);  /* Handle the %u specifier */
int print_octal(va_list val);    /* Handle the %o specifier */
int print_hexadecimal(va_list val);  /* Handle the %x specifier */
int print_HEXA(va_list val);     /* Handle the %X specifier */
int print_HEXA_E(unsigned int num);  /* Handle printing hexadecimal numbers with leading '0x' */
int print_s(va_list val);        /* Handle the %S specifier (custom specifier for handling special characters) */
int print_pntr(va_list val);     /* Handle the %p specifier */
int print_hex_ex(unsigned long int num);  /* Handle printing hexadecimal numbers with leading '0x' (extended) */
int print_reverse(va_list args);  /* Handle the %r specifier (reverse a string) */
int print_rot13(va_list args);   /* Handle the %R specifier (apply ROT13 encryption) */
int _strlen(char *s);

#endif  /* MAIN_H */
