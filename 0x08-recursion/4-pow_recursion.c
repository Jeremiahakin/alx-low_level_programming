#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Calculate the power of an integer recursively.
 * @x: The base integer.
 * @y: The exponent.
 *
 * Return: the power or 1 or -11
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y <= -1)
	{
		return (-1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
