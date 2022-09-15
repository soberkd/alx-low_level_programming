#include "main.h"

/**
 * print_diagonal - print \ diagonal
 * @n: numder of times to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');	
		}
	}
	else
		_putchar('\n');
}
