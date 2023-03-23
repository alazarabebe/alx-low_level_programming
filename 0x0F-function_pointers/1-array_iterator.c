#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function poiniter
 * @array: char
 * @size_t: size
 * @action: char function
 * Return: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
