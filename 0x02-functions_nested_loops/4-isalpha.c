#include "main.h"
#include <ctype.h>

/**
 * _isalpha: checks for alphabetic character
 * @c: character to test
 * Returns: 1 (true) 0 (false)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
