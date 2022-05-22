#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - prints strings and charaters passed by user
 * @format: The string passed that contains the format
 *
 * Return: number of character printed
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list ap;

	if (format == NULL || *format == '\0')
		return (0);
	va_start(ap, format);
	do {
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				count += print_string(va_arg(ap, char*));
			}
			else if (format[i] == 'c')
			{
				putchar(va_arg(ap, int));
				count++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
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
