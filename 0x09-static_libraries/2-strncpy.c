#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Number of bytes to be used
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int b = 0;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
