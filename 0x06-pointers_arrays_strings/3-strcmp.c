#include "main.h"

/**
 * _strcmp - Concatenate two strings
 * @s1: the string
 * @s2: the string
 * Return: pointer
 */

int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
