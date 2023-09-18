#include "main.h"

/**
 * rev_string - returns a string in reverse order.
 * @s: string to be passed
 * Return: reversed string.
 */

void rev_string(char *s)
{
	int i, len, length;
	char c;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	length = len  - 1;
	for (i = 0 ; i < len / 2 ; i++)
	{
		c = s[i];
		s[i] = s[length];
		s[length--] = c;
	}
}
