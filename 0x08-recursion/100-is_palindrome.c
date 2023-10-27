#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	if (s == NULL)
	{
		return (1);
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			if (s[j] != s[i])
			{
				return (0);
			}
			i--;
			j++;
		}
		return (1);
	}
}
