#include "main.h"

/**
 * _strlen - checksand returns the length of a given string.
 * @s: string to be checked.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
