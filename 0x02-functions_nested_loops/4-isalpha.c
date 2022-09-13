#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check alphabetic character
 * @c: letter to check
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
