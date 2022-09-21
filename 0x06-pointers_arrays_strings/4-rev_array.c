#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @a: array being reversed
 * @n: array elements
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}

	while (i < n)
		i++;
}
