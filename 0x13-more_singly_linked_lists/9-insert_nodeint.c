#include "lists.h"

/**
 * insert_nodeint_at_index - unction that inserts a new node at a given
 *  position.
 * @head: pointer to pointer to head of linked list
 * @idx: position in index to insert new node
 * @n: value to be inserted into node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 1;

	temp = *head;
	while (temp)
	{
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);

		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
