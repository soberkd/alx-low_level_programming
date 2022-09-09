#include <stdio.h>

/**
 * main - always void
 *
 * Return: a-z but not e or q
 */

int main(void)
{
	char c = 'a';
	char zd = c + 26;

	while (c < zd)
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
