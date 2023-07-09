#include "main.h"
/**
 * __memcpy - copies memory area
 * @dest: where memory is stored
 * @src: where memory is stored
 * @n: no of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
