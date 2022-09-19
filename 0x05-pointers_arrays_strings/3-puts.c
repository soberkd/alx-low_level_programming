#include "main.h"

/**
 * _puts - prints a sting
 * @str: string being printed
 */
void _puts(char *str)
{
	char *ch = str;
	int arr;

	for (arr = 0; ch[arr]; arr++)
	{
		_putchar(ch[arr]);
	}
	_putchar('\n');
}
