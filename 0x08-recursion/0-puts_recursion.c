#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string recursively, followed by a newline.
 *
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
