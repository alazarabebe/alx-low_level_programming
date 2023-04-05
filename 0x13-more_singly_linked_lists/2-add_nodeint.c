#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - prints the list
 * @head: list pointer
 * @n: data
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = malloc(sizeof(listint_t));

	if (!m)
		return (NULL);
	m->n = n;
	m->next = *head;
	*head = m;

	return (m);
}
