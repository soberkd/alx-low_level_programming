#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: value assigned to a node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	size_t i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	if (!h)
		return (0);
	new = h;
	while (new)
	{
		printf("%d\n", new->n);
		new = new->next;
		i++;
	}
	return (i);

}
