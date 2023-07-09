#include "main.h"
#include <stdio.h>

/**
 * _strncat -  concatentes string
 * @dest: destination string pointer
 * @src: source of the pointer
 * @n: int
 * Return: Number of stykles to be concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, i;

	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, length_of_string++)
	{
		dest[length_of_string] = src[i];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
