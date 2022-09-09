#include <stdio.h>
#include <stdlib.h>

/**
 * main - always void
 *
 * Return: prints digits 0-9
 */
int main(void)
{
	int ch = 0;

	while (ch <= 15)
	{
		if (ch < 10)
			putchar(ch + '0');
		else
			putchar(ch - 10 + 'a');
		ch++;
	}
	putchar('\n');
	return (0);
}
