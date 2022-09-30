#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: values of arguement
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

	return (0);
}
