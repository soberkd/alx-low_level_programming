#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix string
 * @s: string
 * @accept: length to be determined
 * Return: the number of bytes in the initial segment of s which consist only
 *  of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
