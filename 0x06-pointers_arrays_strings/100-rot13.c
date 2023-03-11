#include "main.h"

#include <stdio.h>

/**
 * rot13 - Concatenate two strings
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (s[i] >= '' && s[i] <= 'z')
		{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 13;
		}
		i++;

	}
	return (s);
}
