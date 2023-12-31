#include "lists.h"

/**
 * add_nodeint_end - function that adds a node to the end of the linked list
 * @head: pointer to the first element at the beginning of the list
 * @n: data to be insert into the list
 *
 * Return: conditional that either pointer to the
 *new node or returns NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
