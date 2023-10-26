#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse recursively.
 *
 * @s: A pointer to the string to be printed in reverse.
 */

void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
