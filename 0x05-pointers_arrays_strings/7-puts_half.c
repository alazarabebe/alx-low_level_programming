#include "main.h"
#include <stdio.h>

/**
 * puts_half  - revers string
 * @str: word
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		i = j / 2;
	}

	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
