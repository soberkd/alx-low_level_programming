#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array in which an int is to be searched
 * @size: size of the array
 * @cmp:  pointer to the function to be used to compare values
 * Return: -1 or 1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
