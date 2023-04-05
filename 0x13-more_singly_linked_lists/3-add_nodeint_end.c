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

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;
	list *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
