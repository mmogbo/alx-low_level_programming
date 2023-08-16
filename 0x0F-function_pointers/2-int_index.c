#include "function_pointers.h"

/**
 * int_index - return index place if condition is true, else return -1
 * @array: array to consider
 * @size: size of elements in the array
 * @cmp: pointer to function in main
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
