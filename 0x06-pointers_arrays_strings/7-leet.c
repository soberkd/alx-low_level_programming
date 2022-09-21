#include "main.h"

/**
 * leet - encode a string
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, k;
	char encode[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (k = 0; encode[k] != '\0'; ++k)
		{
			if (str[i] == encode[k])
			{
				str[i] = encode[k + 1];
				break;
			}
		}
	}
	return (str);
}
