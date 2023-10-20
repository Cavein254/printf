#include "main.h"
/**
 * print_upper_hex - converts number to hex representation
 * @num: The number to be converted
 * Return: The hex representation
 */
int print_upper_hex(unsigned int num)
{
	int i, total = 0;
	int *arr;
	unsigned int holder = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		total++;
	}
	total++;
	arr = malloc(sizeof(int) * total);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
	{
		arr[i] = holder % 16;
		holder = holder / 16;
	}
	for (i = total - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (total);
}
