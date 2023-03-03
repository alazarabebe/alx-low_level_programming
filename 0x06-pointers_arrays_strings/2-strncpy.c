#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: the string
 * @src: the string
 * @n: number
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len =0;

	while (dest[i++]);
	dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
