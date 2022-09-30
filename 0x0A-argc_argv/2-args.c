#include <stdio.h>

/**
 * main - prints all the arguements it receives
 * @argc: number of arguements
 * @argv: arguement values
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
