#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int main()
{
	int ccount;
	char* name = "Holberton School";

	ccount = _printf("I am a student at %s yeeh!", name);
	printf("\nPrinted %d characters\n", ccount);
	return 0;
}

/**
 * _printf - prints strings and charaters
 * @format: a pointer to char
 *
 * Return: number of character printed
 **/
/*int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	
	va_list ap;
	va_start(ap, format);

	do
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				count += print(va_arg(ap, char*));
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
}*/

	/*Function to print the string*/
int print(char *ar)
{
	int j = 0;
	int strcount = 0;
	do
	{
		putchar(ar[j]);
		strcount++;
	}
	while (ar[++j]);
	return (strcount);
}

