#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concat two str, using at most 'n' bytes from 's2'.
 * @s1: The first str to be concat.
 * @s2: The second str to be concat (at most 'n' bytes).
 * @n: The max num of bytes from 's2' to be used.
 *
 * Return: ptr to the concat str, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = strlen(s1);
	int j;
	unsigned int k = 0;

	char *ptr = malloc((i * sizeof(char)) + n + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = s1[j];
	}

	while (k < n && s2[j] != '\0')
	{
		ptr[j + k] = s2[k];
		k++;
	}

	ptr[j + k] = '\0';

	return (ptr);
}
