#include "main.h"
/**
 * print_binary - this function returns binary representation
 * @args: the provided arguments
 * Return: 0 for success
 */
int print_binary(va_list args)
{
	int flag = 0;
	int len = 0;
	int b, i, a = 1;
	unsigned int aint = va_arg(args, int);
	unsigned int bint;

	for (i = 0; i < 32; i++)
	{
		bint = ((a << (31 - i)) & num);
		if (bint >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = bint >> (31 - i);
			_putchar(b + 48);
			len++;
		}
	}
	if (count == 0)
	{
		len++;
		_putchar('0');
	}
	return (len);
}
