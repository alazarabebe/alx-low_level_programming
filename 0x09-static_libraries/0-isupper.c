#include "main.h"

#include <ctype.h>

/**
 * _isupper - check if its upper case
 * @c: input char
 * Return: integer
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
	return (1);
	}
	return (0);
}
