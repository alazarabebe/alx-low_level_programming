#include "main.h"
#include <stdio.h>

/**
 * rev_string  - revers string
 * @s: word
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;

	int i = 0;

	char temp;

	while (s[i++])
	{
		a++;
	}

	for (i = a - 1; i >= a / 2; i--)
	{
		temp = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = temp;
	}
}
