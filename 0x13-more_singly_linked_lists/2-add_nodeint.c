#include "lists.h"

/**
 * add_nodeint - a function that either adds a new node at
 *the beginning of a linked list or returns null
 * @head: pointer to the beginning node of linked list
 * @n: data to be inserted
 *
 * Return: pointer conditional new node if true or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
