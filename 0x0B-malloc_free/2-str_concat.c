 #include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i = 0, j = 0, x, y;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	con = malloc(sizeof(char) * (j + i + 1));
	if (con == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		con[x] = s1[x];
	for (y = 0; y < j; y++)
		con[i + y] = s2[y];
	return (con);
}
