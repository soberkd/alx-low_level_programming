#include "main.h"

/**
 * _strdup - copies a string and returns an address to copied memory
 * @str: string to be copied
 * Return: duplicate of string or NULL if str is null
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
		return (NULL);
	while (str[j])
	{
		new_str[j] = str[j];
		j++;
	}
	return (new_str);

}
