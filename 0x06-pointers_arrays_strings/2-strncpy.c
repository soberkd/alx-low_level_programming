#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string that has been copied
 * @src: string being copied
 * @n: length of sting being copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';

	return (dest);
}
