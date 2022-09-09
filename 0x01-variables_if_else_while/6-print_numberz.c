#include <stdio.h>

/**
 * main - always void
 *
 * Return: prints digits 0-9
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
