#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the head of list
 *
 * Return:the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	*head = temp->next;

	free(temp);
	temp = *head;
	return (temp->n);
}
