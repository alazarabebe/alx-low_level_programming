#include "main.h"

/**
 * _strncpy - Concatenate two strings
 * @dest: the string
 * @src: the string
 * @n: number
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	for (i = src_len; index < n; i++)
		dest[i] = '\0';
	return (dest);
}
