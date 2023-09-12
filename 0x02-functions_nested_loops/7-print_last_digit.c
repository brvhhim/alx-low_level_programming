#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: number used to find th elast digit
 * Description: Returns the value of the last digit of the number
 * Return: last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
