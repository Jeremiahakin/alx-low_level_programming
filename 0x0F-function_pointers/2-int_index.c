#include <stdio.h>

/**
 * int_index - Searches for an integer in an array using a given function.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to use for comparison.
 *
 * Return: Index of the first element for which the comparison function does
 *         not return 0, or -1 if no element matches or size <= 0.
 *
 * Description: This function searches for an integer in the array using the
 *              comparison function passed as a parameter.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
