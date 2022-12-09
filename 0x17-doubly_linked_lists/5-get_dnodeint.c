#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 *  linked list
 *  @head: pointer to the head of the list
 *  @index: index of the node, starting with 0
 *
 *  Return: the nth node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int pos = 0;

	if (!head )
		return (NULL);
	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		pos++;
		if (pos == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
