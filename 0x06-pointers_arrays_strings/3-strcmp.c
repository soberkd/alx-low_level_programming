#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string being compared
 * @s2: second string compared
 *
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		/*if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
		else
			diff = 0;*/
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
