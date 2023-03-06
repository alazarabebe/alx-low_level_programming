#include "main.h"

/**
 * _memcpy - print the memoryset
 * @src: array
 * @n: int
 * @dest: char
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
