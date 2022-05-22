#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_string - Prints a string onto the Stdout
 * @ar: The string to be printed
 *
 * Return: The number of characters printed
 *
 */
int print_string(va_list ap)
{
	int j = 0;
	int strcount = 0;

	char *ar = va_arg(ap, char *);

	if (!ar)
		ar = "(null)";

	if (ar[0] == '\0')
		return (-1);

	do {

		strcount += _putchar(ar[j]);

	} while (ar[++j]);

	return (strcount);
}
