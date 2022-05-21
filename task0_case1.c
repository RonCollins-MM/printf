#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - prints strings and charaters
 * @format: a pointer to char
 *
 * Return: number of character printed
 **/
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	char a;

	va_list ap;
	va_start(ap, format);

	do
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				a = va_arg(ap, int);
				putchar(a);
			}
			i++;
		}
		else 
		{
			putchar(format[i]);
			count++;
		}
	}
	while (format[++i]);
	va_end(ap);
	return (count);
}

int main()
{
	int x;
	char alph = 'A';

	x = _printf("This is %c, so cool", alph);
	printf("\nWe printed %d characters", x);
	return 0;
}
