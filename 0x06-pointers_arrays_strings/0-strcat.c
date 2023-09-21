#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to concatenate.
 * @src: string to concatenate.
 * Return: pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;
	src_len = 0;

	while (*(dest + dest_len) != '\0')
		dest_len++;

	while (*(src + src_len) != '\0' && src_len < 97)
	{
		*(dest + dest_len) = *(src + src_len);
		dest_len++;
		src_len++;
	}
	*(dest + src_len) = '\0';
	return (dest);
}
