#include "main.h"

/**
 * factorial - returns factorial of given integer.
 * @n: integer to be tested.
 * Return: 0 on success.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
