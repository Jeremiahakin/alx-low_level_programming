#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate (up to n characters).
 * @n: The maximum number of characters to concatenate from s2.
 * Return: allocated concatenated string If allocation fails returns NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = strlen(s1);
	int j;
	unsigned int m;
	unsigned int k = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		ptr[j] = s1[j];
	}

	for (m = 0; m < n && m < k; m++)
	{
		ptr[j] = s2[m];
		j++;
	}

	ptr[j] = '\0';

	return (ptr);
}
