#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Alloc memory for an arr using malloc and init it to 0.
 * @nmemb: Number of elements in the array.
 * @size: Size (in bytes) of each element.
 *
 * Return: ptr to the alloc memory, or NULL if allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}


	return (ptr);
}
