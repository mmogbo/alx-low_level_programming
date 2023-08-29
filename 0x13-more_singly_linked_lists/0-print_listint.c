#include "lists.h"

/**
 * print_listint - a function that prints the contents of the linked list
 * @h: linked list to be printed
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t numberofnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberofnodes++;
		h = h->next;
	}

	return (numberofnodes);
}
