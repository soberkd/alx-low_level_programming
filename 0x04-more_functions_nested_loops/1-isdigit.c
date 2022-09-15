#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if it id a digit
 * @c: integer being checked
 * Return: 1 if true or 0 if false
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
