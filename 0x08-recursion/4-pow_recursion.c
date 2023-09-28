#include "main.h"

/**
 * _pow_recursion - retunrs value of integer x raised to the power of y
 * @x: Integer
 * @y: Power
 * * Return: 0 on success.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
