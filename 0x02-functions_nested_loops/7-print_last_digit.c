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
	return (abs(mod));
}
