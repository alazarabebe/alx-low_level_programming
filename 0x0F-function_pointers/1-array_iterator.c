#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function poiniter
 * @array: char
 * @size: size
 * @action: char function
 * Return: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
	}
}
