#include "main.h"

/**
 * _puts - prints a sting
 * @str: string being printed
 */
void _puts(char *str)
{
	int arr;

	for (arr = 0; *(str + arr) != '\0'; arr++)
	{
		_putchar(*(str + arr));
	}
	_putchar('\n');
}
