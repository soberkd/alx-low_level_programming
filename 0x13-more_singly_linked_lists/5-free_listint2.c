#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		*temp = (*head)->next;
		*head = temp;
	}
	free(*head)
	*head = NULL;
}
