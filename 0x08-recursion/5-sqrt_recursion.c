#include "main.h"

/**
 * _sqrt - number and square
 * @n: number to be squared
 * @num: square
 * Return: 0 or 1 or square root
 */
int _sqrt(int num, int n)
{
	if (num * num == n)
		return (num);
	if (num * num > n)
		return (-1);
	num++;
	return (_sqrt(num, n));
}


/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to be squared
 * Return: -1 or 1 or square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(2, n));
}
