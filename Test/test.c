#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int main()
{
	int ccount;
	char* name = "Holberton School";
	char* nullc = NULL;
	char* estr = "";
	
	printf("------- Test 0: Passing a string to _printf through a variable -------\n");
	ccount = _printf("I am a student at %s yeeh!", name);
	printf("\nPrinted %d characters\n", ccount);
	
	printf("\n------- Test 1: Passing a \"\" (empty string) to _printf -------\n");
	ccount = _printf("");
	printf("Printed %d characters\n", ccount);

	/*printf("------- Test 1s: Passing a string to _printf through a variable -------\n");
	printf("===Passing \"\" to standard printf===\n");
	printf("");*/

	printf("\n------- Test 2: Passing a NULL to _printf as a variable -------\n");
	ccount = _printf(nullc);
	printf("Printed %d characters\n", ccount);

	printf("\n------- Test 2b: Passing a NULL to _printf directly -------\n");
	ccount = _printf(nullc);
	printf("Printed %d characters\n", ccount);

	/*printf("------- Test 2s: Passing a NULL to standard printf -------\n");
	printf("===Passing NULL to standard printf===\n");
	printf(NULL);*/

	printf("\n------- Test 3: Passing a %%%% to _printf -------\n");
	ccount = _printf("I scored 80%% in my test");
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 4: Passing an unknown format specifier to _printf -------\n");
	ccount = _printf("Two unknown format specifiers: %r, %t");
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 5s: Passing NULL to standard printf through variable -------\n");
	ccount = printf("Null string = %s", nullc);
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 5c: Passing an NULL to _printf through a variable -------\n");
	ccount = _printf("Null string = %s", nullc);
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 6: Passing an empty string to _printf through a variable -------\n");
	ccount = _printf("Empty string =%s", estr);
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 7: Passing random symbols to _printf (not%%) -------\n");
	ccount = _printf("~@#$^&*()_-=+{}[]:;");
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 8: Passing escape character to _printf -------\n");
	ccount = _printf("\n\"\"\\");
	printf("\nPrinted %d characters\n", ccount);

	printf("\n------- Test 9: Passing a single NULL character directly to _printf -------\n");
	ccount = _printf("%c", NULL);
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

