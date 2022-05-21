#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - prints strings and charaters passed by user
 * @format: The string passed that contains the format
 *
 * Return: number of character printed (on success), -1 on error
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list ap;

	va_start(ap, format);
	do {
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				count += print(va_arg(ap, char*));
			}
			else if (format[i] == 'c')
			{
				putchar(va_arg(ap, int));
			}
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	} while (format[++i]);
	va_end(ap);

	return (count);
}

/**
 * print_string - Prints a string onto the Stdout
 * @ar: The string to be printed
 *
 * Return: The number of characters printed (on success),
 *	-1 on Error
 */
int print_string(char *ar)
{
	int j = 0;
	int strcount = 0;

	do {
		putchar(ar[j]);
		strcount++;
	} while (ar[++j]);

	return (strcount);
}
