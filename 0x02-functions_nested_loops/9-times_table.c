#include "main.h"

void times_table(void)
{
	int base, mult, square;


	for (base = 0; base <= 9; base++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			square = base * mult;
			if (square < 10)
			{
				_putchar(square + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar((square / 10) + '0');
				_putchar((square % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');

	}
}
