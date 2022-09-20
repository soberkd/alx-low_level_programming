#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 * Return; always 0
 */
int _atoi(char *s)
{
	int i, result;
	int sign = 1;

	result = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			result = (result * 10) + (s[i] - '0');
			if (s[i + 1] > 57 || s[i + 1] < 48)
				break;
		}
	}
	return (result * sign);

}
