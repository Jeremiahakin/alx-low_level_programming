#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * _strdup - Duplicate a string in newly allocated memory
 * @str: The string to duplicate
 *
 * Return: If malloc fails or if 'str' is 0, returns NULL;
 * else, returns a pointer to the created duplicate str.
 */

char *_strdup(char *str)
{
	char *arr;
	int i, len;

	if (str == 0)
	{
		return (NULL);
	}

	len = strlen(str);
	arr = malloc(len + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}

	arr[len] = '\0';

	return (arr);
}
