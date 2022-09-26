#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string s
 * , or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
