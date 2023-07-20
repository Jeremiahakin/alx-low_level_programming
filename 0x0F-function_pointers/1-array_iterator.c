#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the integer array
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: Void.
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
