#include "main.h"

/**
 * _strcpy - copy string
 * @dest: location on which to be copie to
 * @str: string to be copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
