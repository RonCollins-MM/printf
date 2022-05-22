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
int print_string(char *ar)
{
	int j = 0;
	int strcount = 0;

	if (ar == NULL)
	{
		fputs("(null)", stdout);
		strcount = 6;
		return (strcount);
	}
	else if (*ar == '\0')
	{
		return (0);
	}
	do {
		putchar(ar[j]);
		strcount++;
	} while (ar[++j]);

	return (strcount);
}
