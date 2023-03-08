#include "main.h"

/**
 * _strlen_recursion - puts
 * @s: array
 */

int _strlen_recursion(char *s)
{
	size_t i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + i);
	i++;
	return (i)
}
