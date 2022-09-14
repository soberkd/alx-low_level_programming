#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prinst the last digit
 * @value: value being checked
 * Return: last digit
 */
int print_last_digit(int value)
{
	int mod;

	mod = value % 10;
	if (mod < 0)
	{
		mod = mod * (-1);
	}
	_putchar(mod + '0');
	return (mod);
	/*return (abs(mod));*/
}
