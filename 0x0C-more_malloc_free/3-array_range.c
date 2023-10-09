#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array of integers from 'min' to 'max' (inclusive).
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: pointer on success, otherwise NULL
 */

int *array_range(int min, int max)
{
	int i = (max - min) + 1;
	int *ptr, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(i * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = min;
		min++;
	}

	return (ptr);
}
