#include "main.h"

void times_table(void)
{
	int base, mult, square;


	for (base = 0; base <= 9; base++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			square = base * mult;
			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
			} 
			if (mult == 0)
			{
				_putchar('0');

			}
			else if ((square < 10) && (mult != 0))
			{
				_putchar(' ');
				_putchar(square + '0');
			} else if (square >= 10)
			{
				_putchar((square / 10) + '0');
				_putchar((square % 10) + '0');
			}
		}
	_putchar('\n');

	}
}
