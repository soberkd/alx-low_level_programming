#include "main.h"
#include <ctype.h>

/**
 * _islower - check lowercase latters
 * @c: letter to be checked
 * Return: 0.
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
