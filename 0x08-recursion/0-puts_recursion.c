#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - writes a string followed by a new libe to stdout
 * @s: The pointer charcater to print
 * Return: void, nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
