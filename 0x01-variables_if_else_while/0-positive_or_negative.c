#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stddef.h>

/* more headers goes there */

/**
 * main - main fuction
 *
 * Return: value of n if positive or zero or negative or return 0
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
