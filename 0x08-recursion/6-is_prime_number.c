#include "main.h"

/**
 * CheckPrime - checks if number is prime
 * @i: numb
 * @num: checked
 * Return: 1 or 0
 */
int CheckPrime(int i, int num)
{
	if (num == i)
		return (0);
	else if (num % i == 0)
		return (1);
	return (CheckPrime(i + 1, num));
}
/**
 * is_prime_number - tests if a number is prime or not
 * @n: number checkes
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (CheckPrime(2, n) == 0);

}
