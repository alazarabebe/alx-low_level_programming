#include "list.h"
#include <stdlib.h>

/**
 * print_listint - prints the list
 * @h: list pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while(h)
	{
		i++;
		printf("%d\n", h -> n);
		h = h ->next;
	}
	return (i);
}
