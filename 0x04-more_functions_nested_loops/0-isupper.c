#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if letter is alphabet
 * @c: character passed
 * Return: is upper case
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
