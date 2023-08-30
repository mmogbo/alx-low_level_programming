#include "lists.h"

/**
 * sum_listint - a fuction that calculates the sum of all the
 *data items on the list
 * @head: first node on the list
 *
 * Return: sum of values
 */
int sum_listint(listint_t *head)
{
	int sumofvalues = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumofvalues += temp->n;
		temp = temp->next;
	}

	return (sumofvalues);
}
