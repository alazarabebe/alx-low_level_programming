#include "main.h"

/**
 * _memset - print the memoryset
 * @s: array
 * @n: int
 * @b: char
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
