#include "main.h"

/**
 * _islower - prints putchar
 * @c: value
 * Return: 0
 */

int _islower(int c)
{
	int d;
		if (c >= 97 && c <= 122)
		{
			d = 1;
		}
		else
			d = 0;
		return (d);
}
