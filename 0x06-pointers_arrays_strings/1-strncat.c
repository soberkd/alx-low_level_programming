#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination of string
 * @src: source of concatenated string
 * @n: number of bytes used
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
		++len;

	for (i = 0; i < n && src[i] != '\0'; ++i, ++len)
		dest[len] = src[i];

	dest[len] = '\0';
	return (dest);
}
