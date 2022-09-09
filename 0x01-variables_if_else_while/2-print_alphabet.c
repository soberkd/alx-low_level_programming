#include <stdio.h>

/**
 * main - always void
 *
 * Return: alphabet from a to z of 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
