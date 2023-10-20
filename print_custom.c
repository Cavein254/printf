#include "main.h";
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
		if (c[i] < 32 || s[i] >= 127)
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
	}
}
