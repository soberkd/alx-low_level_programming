#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - finds the sum of the two diagonals of a square matrix of
 *  of integers
 * @a: x
 * @size: y
 */
void print_diagsums(int *a, int size)
{
	int i, diagO = 0, diagT = 0;

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}

	printf("%d, %d\n", diagO, diagT);

}
