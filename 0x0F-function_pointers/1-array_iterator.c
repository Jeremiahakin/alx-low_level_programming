#include <stdio.h>
#include <stdlib.h>


/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each array element.
 *
 * Description: This function iterates through each element of the array and
 *              applies the provided function to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
