#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints string in reverse
 * @s: string being reversed
 */
void print_rev(char *s)
{
	int arr;

	for (arr = _strlen(s) - 1; arr >= 0; arr--)
	{
		_putchar(*(s + arr));
	}
	_putchar('\n');
}
