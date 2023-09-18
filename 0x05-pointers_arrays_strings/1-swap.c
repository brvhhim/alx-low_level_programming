#include "main.h"

/**
 * swap_int - takes two pointers to integers and swaps their values.
 * @a: points to address of a.
 * @b: points to address of b.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
