#include "main.h"

/**
 * _strchr - print the memoryset
 * @s: array
 * @c: char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\n'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
