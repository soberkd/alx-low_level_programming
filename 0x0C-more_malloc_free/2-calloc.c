#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elemts of the array
 * @size: bytes of the array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
