#include <stdio.h>
#include "main.h"

int _sqrt(int n, int y);

/**
 * _sqrt_recursion - Calculate the integer square root recursively.
 * @n: The integer for which to calculate the square root.
 * Return: The integer square root of 'n' if it's a perfect square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculate the integer square root recursively.
 * @n: The integer for which to calculate the square root.
 * @y: The current guess for the square root.
 *
 * Description:
 * This function recursively calculates the integer square root.
 * It finds the largest integer 'x'
 *
 * @n: The integer for which to calculate the square root.
 * @y: The current guess for the square root.
 *
 * Return: y
 */

int _sqrt(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y == n || n <= 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, y + 1));
	}
}
