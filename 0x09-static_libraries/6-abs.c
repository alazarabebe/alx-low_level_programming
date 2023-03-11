#include "main.h"

/**
 * _abs - prints putchar
 * @c: value
 * Return: 0
 */

int _abs(int c)
{
	int d;
		if (c < 0)
		{
			d = -(c);
		}
		else
		{
			d = c;
		}
		return (d);
}
