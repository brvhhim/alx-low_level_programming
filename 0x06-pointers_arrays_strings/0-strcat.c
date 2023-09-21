#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to concatenate.
 * @src: string to concatenate.
 * Return: pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	char concat = *dest + *src;

	char *result = &concat + '\0';

	return (result);
}
