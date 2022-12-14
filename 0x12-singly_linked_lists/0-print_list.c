#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list element passed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			element++;
		}
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		element++;
	}
	return (element);
}
