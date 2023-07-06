#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string
 * @s: pointer to string
 * Return: the kength of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
