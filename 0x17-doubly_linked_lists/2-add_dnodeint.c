#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint-adds a new node at the beginning of a list
 * @head: pointer to the pointer pointing to the doubly linked list
 * @n: the element to be added
 * Return: pointer to the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
