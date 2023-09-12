#include "main.h"
/**
 * Main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *c = "_putchar\n";	
	
	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (0);
}
