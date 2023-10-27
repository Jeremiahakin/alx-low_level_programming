#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Recursively calculates the length of a string.
 * @s: A pointer to the string to measure.
 *
 * Return: str or 0
 */

int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
