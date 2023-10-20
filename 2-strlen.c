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

/**
 * _strlen_const - calculates the length of a constant string pointer
 * @s: The string provided
 * Return: string length
 */
int _strlen_const(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
