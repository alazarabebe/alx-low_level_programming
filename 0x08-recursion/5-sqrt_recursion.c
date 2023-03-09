#include "main.h"

/**
 * _sqrt_recursion - puts
 * @n: number
 * Return: int
 */

int _s(int n, int i);

int _sqrt_recursion(int n)
{
	return (_s(n, 1));
}

/**
 * _s - calculet squer
 * @n: number
 * @i: number
 * Return: int
 */

int _s(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_s(n, i + 1));
}
