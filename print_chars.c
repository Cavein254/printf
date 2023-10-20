#include "main.h"
/**
 * print_chars - prints characters from a given argument
 * @args: The arguments
 * Return: 1 for success
 */
int print_chars(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
