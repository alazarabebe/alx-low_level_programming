#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - array
 * @s1: int
 * @s2: int
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (l >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}

	s[k] = '\0';
	return (s);
}
