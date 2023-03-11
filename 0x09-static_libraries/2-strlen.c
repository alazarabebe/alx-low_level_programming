#include "main.h"

/**
 * _strlen  - check if its upper case
 * @s: word
 * Return: void
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
