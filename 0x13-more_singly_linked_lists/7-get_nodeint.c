#include "lists.h"

/**
 * get_nodeint_at_index - function that returns either the node
 *at a particular index in the list or null
 * @head: first node in list
 * @index: index of the node to be returned
 *
 * Return: conditional either the pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
