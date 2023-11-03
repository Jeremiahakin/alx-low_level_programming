#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Realloc a memory block.
 * @ptr: ptr to previously alloc memory block.
 * @old_size: size, in bytes, of the old memory block.
 * @new_size: new size, in bytes, for the memory block.
 *
 * Return: If successful, ptr to the realloc memory block.
 *         If new_size is 0 and ptr is not NULL, ptr to a new,
 *         empty memory block.
 *         If new_size is greater than old_size, the contents of the
 *         new block are uninitialized.
 *         If new_size is less than old_size, the contents of the
 *         block are truncated to fit the new size.
 *         If memory allocation fails, NULL is returned, and the old
 *         block is not modified.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *point;
	int i = 0;
	char *char_ptr, *char_point;

	point = malloc(new_size);

	if (point == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		free(point);
		return (ptr);
	}
	char_ptr = (char *)ptr;
	char_point = (char *)point;

	if (new_size > old_size)
	{
		while (char_ptr[i] != '\0')
		{
			char_point[i] = char_ptr[i];
			i++;
		}
		free(ptr);
	}
	if (ptr == NULL)
	{
		return (point);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (point);
}
