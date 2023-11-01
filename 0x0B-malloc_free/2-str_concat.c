#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings into a newly allocated memory
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: If malloc fails or if 's1' or 's2' is NULL, returns NULL;
 * else, returns a pointer to the concat str.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		 s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc(len1 + len2 + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
        {
                concat[len1 + i] = s2[i];
        }
	concat[len1 + len2] = '\0';

	return (concat);
}
