#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter on
 *  each element of an array
 * @array: array being executed
 * @size: sze of array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
