#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array
 * @size: int
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
