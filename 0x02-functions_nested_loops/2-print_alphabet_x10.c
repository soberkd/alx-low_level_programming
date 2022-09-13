#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0
 */
int print_alphabet_x10(void)
{
	char c = 'a';
	int k = 0;

	while (k < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	k++;
	}
	return (0);
}
