#include "main.h"

/**
 * _puts  - check if its upper case
 * @str: word
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
