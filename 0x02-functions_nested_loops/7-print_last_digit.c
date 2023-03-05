#include "main.h"

/**
 * print_last_digit - prints putchar
 * @c: value
 * Return: 0
 */

int print_last_digit(int c)
{
	int d;

	if (c < 0)
	{
		d = -(c % 10);
		_putchar('0' + d);
	}
	else
	{
	d = c % 10;
	_putchar('0' + d);
	}
	return (d);
}
