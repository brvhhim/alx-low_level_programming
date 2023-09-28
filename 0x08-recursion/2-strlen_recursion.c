#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: string to be tested.
 * Return: 0 on Success.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

