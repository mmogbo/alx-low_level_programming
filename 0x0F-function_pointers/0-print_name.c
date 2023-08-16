#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - s function that prints a name using pointer
 * @name: string to be added
 * @f: pointer to function
 * Return: nothing is returned
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
