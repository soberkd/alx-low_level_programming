#include "main.h"

/**
 * factorial - factarial of given number
 * @n: number
 * Return: factorial or 0 or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
