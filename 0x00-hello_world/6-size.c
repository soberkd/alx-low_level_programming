#include <stdio.h>

/**
 * main -Prints sizes
 *
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu (s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu(s)\n", (unsigned long)sizeof(f));

	return (0);
}
