#include "lists.h"

/**
 * listint_len - function that loops over elements in a linked lists
 * @h: linked list to loop over
 *
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numberofnodes = 0;

	while (h)
	{
		numberofnodes++;
		h = h->next;
	}

	return (numberofnodes);
}
