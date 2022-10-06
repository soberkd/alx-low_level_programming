#include "main.h"

/**
 * string_nconcat -concatinates two strings
 * @s1: destination string
 * @s2: source string
 * @n: length of s2 to copy
 * Return: s2 0r NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, lens1;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	lens1 = i;
	str = malloc(sizeof(char) * (lens1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (str);
}
