#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out a character
 * @a: character to be printed
 *
 * Return: the charactet to be printed
 **/

int _putchar(char a)
{
	return(write(1, &a, 1));
}
