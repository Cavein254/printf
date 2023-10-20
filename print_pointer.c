#include "main.h"
/**
 * print_pointer - prints the value of a pointer
 * @args: provided arguments
 * Return: A pointer value
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *p_str = "(nil)";
	int i;
	long int temp;
	int final;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		for (i = 0; *p_str != '\0'; i++)
			_putchar(p_str[i]);
		return (i);
	}
	temp = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	final = print_lower_hex(temp);
	return (final + 2);
}
