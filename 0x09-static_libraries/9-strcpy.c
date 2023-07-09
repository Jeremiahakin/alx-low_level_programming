#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the sting pointed to src
 * @dest: char type string
 * @src: char type string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;

	do {
		((dest[z] = src[z]));
		(z++);
	} while (src[z] != '\0');

	return (dest);
}
