#include <stdio.h>

/**
 * main - always void
 *
 * Return: Numbers of base 10 with one digit
 */

int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
