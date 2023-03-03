#include "main.h"

/**
 * leet - Concatenate two strings
 * @s: string
 * Return: pointer
 */

char *leet(char *s)
{
	int i = 0;

	int j = 0;

	char jj[] = {'a', 'e', 'o', 't', 'l'};

	char k[] = {'A', 'E', 'O', 'T', 'L'};

	char l[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == jj[j] || s[i] == k[j])
				s[i] = l[j];
		}
		i++;	
	}
	return (s);
}
