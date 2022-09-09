#include <stdio.h>

/**
 * main - always void
 *
 * Return: a-z but not e or q
 */

int main(void)
{
	char c = 'a';

	while (c < 'z')
	{
		if (c == 'e' || c == 'q')
		{
			++c;
			continue;
		}
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
