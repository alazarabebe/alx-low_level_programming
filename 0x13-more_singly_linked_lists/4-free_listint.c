#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - prints the list
 * @head: list pointer
 *
 * Return: number of nodes
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
