#include "main.h"

/**
 * rot13 - encode string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, n;
	char nom[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		for (n = 0; nom[n] != '\0'; n++)
		{
			if (str[i] == nom[n])
			{
				str[i] = rot[n];
				break;
			}
		}
		i++;
	}
	return (str);
}
