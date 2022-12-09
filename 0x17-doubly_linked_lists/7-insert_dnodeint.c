#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *  position.
 * @h: pointer to a pointer to head of the list
 * @idx: index of the list where the new node should be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int position = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	temp = *h;
	while (temp && position < idx)
	{
		temp = temp->next;
		position++;
	}
	new->next = temp;
	new->prev->next = new;
	new->prev = temp->prev;
	temp->prev = new;
	return (new);
}
