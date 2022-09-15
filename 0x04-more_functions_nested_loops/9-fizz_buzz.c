#include <stdio.h>

/**
 * main - prints 1-100 adding fizz to multiples of 3 and adding buzz to
 * multiple of 5 and fizzbuzz fo multiple of both 5and 3
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
			printf("FizzBuzz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
