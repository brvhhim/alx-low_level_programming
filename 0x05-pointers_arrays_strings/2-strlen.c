#include "main.h"

/**
 * _strlen - returns the length of a given string.
 * @s: string to be checked.
 * return: length of string.
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
