#include "main.h"
#include <string.h>

/**
 * _memset - fills memmory with a constant byte
 * @s: points to memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
