#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 *  position.
 * @h: pointer to a pointer to head of the list
 * @idx: index of the list where the new node should be added
 * @n: value to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *before, *after, *new_node;

	if (!h)
		return (NULL);

	before = *h;
	after = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = after;
		if (after)
			after->prev = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	if (after)
		after = after->next;
	else
		return (NULL);
	for (i = 1; after != NULL && i < idx; i++)
	{
		before = before->next;
		after = after->next;
	}
	if (i == idx)
	{
		before->next = new_node;
		new_node->prev = before;
		new_node->next = after;
		if (after)
			after->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
