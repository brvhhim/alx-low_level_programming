#include "main.h"
/**
 * print_sign(int n): prints the sign of character
 * @n: character to pass
 * Return: 1 (positive) 0 (zer0) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
