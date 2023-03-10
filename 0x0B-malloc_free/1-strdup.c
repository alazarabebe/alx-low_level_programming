#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - array
 * @str: int
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
