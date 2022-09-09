#include <stdio.h>

/**
 * main - always void
 *
 * Return: 0-9 with a comme and space in between
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x != 10)
		{
			putchar(',');
			putchar (' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
