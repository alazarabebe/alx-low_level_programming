#include "main.h"

/**
 * _pow_recursion - puts
 * @x: number
 * @y: number
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (x * 1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x,y - 1));
}
