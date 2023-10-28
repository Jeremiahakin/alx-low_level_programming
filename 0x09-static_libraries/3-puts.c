#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: the string and a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
