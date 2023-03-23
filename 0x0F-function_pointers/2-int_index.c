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
	unsigned int i = 0;

	if (size <= 0)
		return (-1):
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
	}
	else
		return (-1);
}
