#include "main.h"

/**
 * _isdigit(int c) - checks if the value is a digi
 * @c: character to be tested
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
