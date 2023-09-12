#include "main.h"
#include <stdio.h>

/**
 * print_to_98: prints all numbers to 98
 * Description: prints all natural numbers from n to 98 followed by a new line
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)

	{
		printf("98");
	}
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
	}
	printf("\n");
}
