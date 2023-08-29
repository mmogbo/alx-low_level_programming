#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of the linked list
 * @head: pointer pointing to the first item on the list
 *
 * Return: conditional that returns the data that was deleted
 * or 0 for an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
