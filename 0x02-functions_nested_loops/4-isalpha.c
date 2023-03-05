#include "main.h"

/**
 * _isalpha - prints putchar
 * @c: value
 * Return: 0
 */

int _isalpha(int c)
{
	int d;
		if (c >= 65 && c <= 122)
		{
			d = 1;
		}
		else
			d = 0;
		return (d);
}
