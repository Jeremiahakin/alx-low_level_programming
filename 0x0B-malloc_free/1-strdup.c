#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated duplicate string, or NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ch;
	int j;


	while (str[i] != '\0')
	{
		i++;
	}

	ch = (char *) malloc((i + 1) * sizeof(char));

	for (j = 0; j < i; j++)
	{
		ch[j] = str[j];
	}

	ch[i] = '\0';

	return (ch);
}
