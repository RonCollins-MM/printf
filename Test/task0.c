#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int main()
{
	int ccount;

	ccount = _printf("This");
	printf("\nPrinted %d chars\n", ccount);
	return 0;
}

/**
 * _printf - prints strings and charaters
 * @format: a pointer to char
 *
 * Return: number of character printed
 **/
/* int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;

	va_list ap;
	va_start(ap, format);

	do
	{
		putchar(format[i]);
		count++;
	}
	while (format[++i]);
	va_end(ap);
	return (count);
}*/

