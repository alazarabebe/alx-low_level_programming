#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints the list
 * @h: list pointer
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes  = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
