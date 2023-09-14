#include <ctype.h>

/**
 * _isupper - checks if the given number is uppercase
 * @c: character to be tested
 * Return: 1 if uppercase 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
