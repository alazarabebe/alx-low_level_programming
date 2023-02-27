#include "main.h"

/**
 * _strlen  - check if its upper case
 * @s: word
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
