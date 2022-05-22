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
	va_start(ap, format);
	
	if (format == NULL || *format == '\0')
		{
			return(0);
		}

	do {
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				count += print_string(ap);
			}
			else if (format[i] == 'c')
			{
				count += _putchar(va_arg(ap, int));
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	} while (format[++i]);
	
	va_end(ap);

	return (count);
}
