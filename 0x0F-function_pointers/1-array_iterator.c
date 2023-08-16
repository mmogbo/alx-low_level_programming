#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array element on a new level
 * @array: array to print from
 * @size: number of elements to be printed
 * @action: pointer to print in regular or hex
 * Return: nothing returned
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
