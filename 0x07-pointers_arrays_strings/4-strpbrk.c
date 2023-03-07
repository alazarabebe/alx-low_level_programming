#include "main.h"

/**
 * _strpbrk - print the memoryset
 * @s: array
 * @accept: char
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
