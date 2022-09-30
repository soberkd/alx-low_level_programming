#include <stdio.h>

/**
 * main -  prints the number of arguements passed
 * @argc: number of arguements
 * @argv: arguement values
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
