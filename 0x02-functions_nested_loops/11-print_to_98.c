#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98 starting from n
 * @n: starting number
 */
void print_to_98(int n)
{
	int count;

	if (n == 98)
	{
		printf("%d\n", n);

	} else if (n < 98)
	{

		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);

		}
		printf("%d\n", 98);
	} else
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
		printf("%d\n", 98);
	}

}
