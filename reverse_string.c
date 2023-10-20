#include "main.h"
/**
 * reverse_string - reverses a given string input
 * @args: given arguments
 * Return: reversed version of the string
 */
int reverse_string(va_list args)
{
	char *str = va_arg(args, char*);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
