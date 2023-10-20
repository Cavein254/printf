#include "main.h"
/**
 * _printf - provides functionality similar to the standard prinf
 * @identifier: determines the function to be run
 * Return: integer variable
 */
 int _printf (const char *identifier, ...)
{
	match f[] = {
		{"%c", print_chars}, {"%s", print_strings}, {"%%", print_percentage}
	};
	va_list args;
	int i = 0, size = 0;
	int j;

	va_start(args, identifier);
	if (identifier == NULL || (identifier[0] == '%' && identifier[1] == '\0'))
		return (-1);
More:
	while (identifier[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (f[j].type[0] == identifier[i] &&
			    f[j].type[1] == identifier[i + 1])
			{
				size = size + f[j].f(args);
				i = i + 2;
				goto More;
			}
			j--;
		}
		_putchar(identifier[i]);
		i++;
		size++;
	}
	va_end(args);
	return (size);
}
