#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an arr of int from min to max(inclusive).
 * @min: The min value for the arr.
 * @max: The max value for the arr.
 *
 * Return: ptr to the newly created arr, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int i = (max - min) + 1;
	int *ptr;
	int j = 0;

	ptr = malloc(sizeof(int) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr[j] = min;
		min++;
		j++;
	}

	return (ptr);
}
