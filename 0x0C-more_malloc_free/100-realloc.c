#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: The size (in bytes) of the currently allocated memory block.
 * @new_size: The new size (in bytes) for the reallocated memory block.
 *
 * Return: pointer on success, otherwise NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}

if (new_size < old_size)
{
old_size = new_size;
}

for (i = 0; i < old_size; i++)
{
((char *)new_ptr)[i] = ((char *)ptr)[i];
}

free(ptr);
return (new_ptr);
}
