#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - print half string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, n, length;

	length = _strlen(str);
	if ((length % 2) == 1)
		n = (length - 1) / 2;
	else
		n = length / 2;

	for (i = n; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
