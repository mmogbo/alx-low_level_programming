#include "lists.h"

/**
 * free_listint2 - function that executes a conditional to free a linked list
 * @head: pointer to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
