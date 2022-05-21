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
}

int main()
{
	int x;
	x = _printf("This");
	printf("\nWe printed %d characters", x);
	return 0;
}
