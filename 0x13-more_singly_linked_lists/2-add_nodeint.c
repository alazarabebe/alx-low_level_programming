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

listint_t *add_nodeint(listint_t **head,const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
