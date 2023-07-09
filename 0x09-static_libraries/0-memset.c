#include "main.h"
/**
 * _memset - ptogram fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: no of bytes to be changed
 * Return: change array with now value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; a > 0; a++)
	{
		s[a] = b;
		s--;
	}
	return (s);
}
