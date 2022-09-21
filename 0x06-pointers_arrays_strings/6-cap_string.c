#include "main.h"

/**
 * cap_string - capitalize all word of a string
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i, k;
	char sep[] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(', ')', '{',
		'}'};

	for (k = 0; sep[k] != '\0'; k++)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == sep[k])
				continue;
			if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == sep[k] || i == 0))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
