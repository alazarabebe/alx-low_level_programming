#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function poiniter
 * @array: char
 * @size: size
 * @cmp: char function
 * Return: pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v, i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
	while (i < size)
	{
		v = (*cmp)(array[i]);
		if (v == 1)
		{
			break;
		}
		i++;
	}
	if (v != 1)
		return (-1);
	}
	return (i);
}
