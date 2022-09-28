#include "main.h"

/**
 * _pow_recursion - power of a value raised to another
 * @x: value to be powered
 * @y: value to power by
 * Return: 0 or -1 or power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
