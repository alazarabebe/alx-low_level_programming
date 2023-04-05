#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - prints the list
 * @head: list pointer
 * @n: data
 *
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m;
	listint_t *temp = *head;

	m = malloc(sizeof(listint_t));

	if (!m)
		return (NULL);
	m->n = n;
	m->next = NULL;

	if (*head == NULL)
	{
	*head = m;
	return (m);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = m;

	return (m);
}
