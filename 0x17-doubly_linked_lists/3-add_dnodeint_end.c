#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 *  dlistint_t list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);

}
