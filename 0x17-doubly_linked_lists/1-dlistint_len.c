#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 *  dlistint_t list
 *  @h: pointer to head of node
 *
 *  Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
