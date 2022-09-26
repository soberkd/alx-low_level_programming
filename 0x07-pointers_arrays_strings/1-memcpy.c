#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: where to be copied
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
