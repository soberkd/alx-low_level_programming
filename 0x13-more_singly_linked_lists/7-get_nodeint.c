#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;


	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (0);
}
