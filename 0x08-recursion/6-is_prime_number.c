#include "main.h"

int _c(int n, int i);

/**
 * is_prime_number - puts
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
	return (_c(n, 1));
}

/**
 * _c - calculet squer
 * @n: number
 * @i: number
 *
 * Return: int
 */

int _c(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (_c(n, i + 1));
}
