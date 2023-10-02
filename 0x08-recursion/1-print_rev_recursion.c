#include <stdio.h>
#include "main.h"

/*
 * _print_rev_recursion - writes string in reverse to stdout
 * @s: the char to print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
