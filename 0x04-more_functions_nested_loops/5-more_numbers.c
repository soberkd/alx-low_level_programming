#include "main.h"
/**
 * more_numbers - print 0 -14 ten times
 */

void more_numbers(void)
{
	int i, j, dig1, dig2;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				dig2 = j;

			if (j > 9)
			{
				dig1 = j / 10;
				dig2 = j % 10;
				_putchar(dig1 + '0');
			}

			_putchar(dig2 + '0');

		}
		_putchar('\n');
	}
}
