#include "main.h"

/**
 * swap_int  - check if its upper case
 * @a: number
 * @b: number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}
