#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ch;

	if (s1 == NULL)
	{
		s1 = " ";
	}


	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	ch = (char *) malloc((i + j + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		ch[k] = s1[k];
		k++;
	}

	while (s2[l] != '\0')
	{
		ch[k] = s2[l];
		k++;
		l++;
	}
	ch[k] = '\0';
	return (ch);
}
