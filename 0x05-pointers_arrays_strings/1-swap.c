#include "main.h"

/**
 * swap_int - swaps the value of to integers
 * @a: first integer being swaped by second
 * @b: secind integer being swaped by the first
 */
void swap_int(int *a, int *b)
{


	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
