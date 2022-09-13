#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0
 */
int print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
