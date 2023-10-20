#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: The string provided
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
