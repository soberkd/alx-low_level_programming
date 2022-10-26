#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked
 * listint_t list
 * @h: the value in the list
 *
 * Return: the number of elements in a linked listint_t list or 0
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *new;
	size_t i = 0;

	if (!h)
		return (0);
	new = h;
	while (new)
	{
		new = new->next;
		i++;
	}

	return (i);
}
