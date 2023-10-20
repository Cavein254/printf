#include "main.h"
/**
 * print_custom - prints hexadecimal equivalent of non printing characters
 * @arg: provided characters of arguments
 * Return: The hex value
 */
int print_custom(va_list arg)
{
	char *c;
	int i;
	int size = 0;
	int temp;

	c = va_arg(arg, char*);
	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] < 32 || c[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			size = size + 2;
			temp = c[i];
			if (temp < 16)
			{
				_putchar('0');
				size++;
			}
			size = size + print_upper_hex(temp);
		}
		else
		{
			_putchar(c[i]);
			size++;
		}
	}
	return (size);
}
