#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - Allocates memory for calloc and initializes it to zero
 * @nmemb: The number of elements in the array
 * @size: The size in bytes of each element
 *
 * Return: On succes Pointer, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int newsize, *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	newsize = nmemb * size;
	ptr = malloc(newsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, newsize);

	return (ptr);
}
