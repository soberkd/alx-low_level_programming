#include "lists.h"


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
