#include "main.h"

/**
 * print_line - prints a line to a given lenght.
 * @n: length of the line.
 *
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

