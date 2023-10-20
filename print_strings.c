#include "main.h"
/**
 * print_strings - print a string from given arguments
 * @args: The given arguments
 * Return: The given string length
 */
int print_strings(va_list args)
{
	char *c;
	int i;
	int size;

	c = va_arg(args, char*);
	if (c == NULL)
	{
		c = "(null)";
		size = _strlen(c);
		for (i = 0; i < size; i++)
			_putchar(c[i]);
		return (size);
	}
	else
	{
		size = _strlen(c);
		for (i = 0; i < size; i++)
			_putchar(c[i]);
		return (size);
	}
}
