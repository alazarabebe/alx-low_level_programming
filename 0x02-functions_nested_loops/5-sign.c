#include "main.h"

/**
 * print_sign - prints putchar
 * @c: value
 * Return: 0
 */

int print_sign(int c)
{
	int d;
		if (c > 0)
			d = 1;
		else if (c == 0)
			d = 0;
		else
			d = -1;
		return (d);
}
