#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an arr of char and init it with 'c'
 * @size: The size of the array
 * @c: The character to init the array with
 *
 * Return: If 'size' is 0 or if the function fails, returns NULL;
 * otherwise, returns a pointer to the newly created array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
