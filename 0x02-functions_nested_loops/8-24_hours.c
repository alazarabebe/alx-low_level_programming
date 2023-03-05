#include "main.h"

/**
 * jack_bauer - prints putchar
 * @c: value
 * Return: 0
 */

void jack_bauer(void)
{
	int d;

	int e;

	int f;

	int g;

	for (d = 0; d < 10; d++)
	{
		_putchar('0');
		_putchar('0');
		_putchar(':');
		_putchar('0');
		_putchar('0' + d);
		_putchar('\n');
	}
	for (d = 1; d < 6; d++)
	{
		for (e = 0; e < 10; e++)
		{
		_putchar('0');
		_putchar('0');
		_putchar(':');
		_putchar('0' + d);
		_putchar('0' + e);
		_putchar('\n');
		}
	}
	for (f = 1; f < 10; f++)
	{
		for (d = 1; d < 6; d++)
		{
			for (e = 0; e < 10; e++)
			{
				_putchar('0');
				_putchar('0' + f);
				_putchar(':');
				_putchar('0' + d);
				_putchar('0' + e);
				_putchar('\n');
			}
		}
	}
	for (g = 1; g < 2; g++)
	{
		for (f = 0; f < 10; f++)
		{
			for (d = 0; d < 6; d++)
			{
				for (e = 0; e < 10; e++)
				{
					_putchar('0' + g);
					_putchar('0' + f);
					_putchar(':');
					_putchar('0' + d);
					_putchar('0' + e);
					_putchar('\n');
				}
			}
		}
	}
	for (g = 2; g < 3; g++)
	{
		for (f = 0; f < 4; f++)
		{
			for (d = 0; d < 6; d++)
			{
				for (e = 0; e < 10; e++)
				{
					_putchar('0' + g);
					_putchar('0' + f);
					_putchar(':');
					_putchar('0' + d);
					_putchar('0' + e);
					_putchar('\n');
				}
			}
		}
	}
}
