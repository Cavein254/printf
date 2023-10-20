 #include "main.h"
/**
 * string_rot13 - a fuction that returns rot13
 * @args: arguments
 * Return: rot13
 */
int string_rot13(va_list args)
{
	int i, j, total = 0;
	int k = 0;
	char *str = va_arg(args, char*);
	char x[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char y[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; x[j] && !k; j++)
		{
			if (str[i] == x[j])
			{
				_putchar(y[j]);
				total++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			total++;
		}
	}
	return (total);
}
