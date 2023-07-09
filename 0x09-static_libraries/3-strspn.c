#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		i++;
	}
	return (i);
}
