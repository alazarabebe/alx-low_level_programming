#include "main.h"

/**
 * _strlen_recursion - puts
 * @s: array
 * Return: number of count
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
