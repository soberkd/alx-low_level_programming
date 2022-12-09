#include "lists.h"

/**
* free_dlistint - frees a linked list
*
* @head: first member of list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = NULL;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
