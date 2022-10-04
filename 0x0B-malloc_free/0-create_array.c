#include "main.h"

/**
 * create_array - crates an array of characters
 * @size: size of array
 * @c: array characters
 * Return: array of charcters
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int i;

	pt = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		pt[i] = c;

	return (pt);
}
