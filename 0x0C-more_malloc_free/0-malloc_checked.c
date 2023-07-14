#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocted
 * Return: pointer to allocted memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		char *error_message = "malloc failed\n";

		write(STDERR_FILENO, error_message, strlen(error_message));

		exit(98);
	}

	return (ptr);
}
