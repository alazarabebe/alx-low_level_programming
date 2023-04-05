#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - prints the list
 * @head: list pointer
 *
 * Return: number of nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;

	while (*head)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}
	*head = NULL;
}
