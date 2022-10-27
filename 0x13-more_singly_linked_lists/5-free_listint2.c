#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		*head = NULL;
	if (**head == NULL)
		*head = NULL;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
