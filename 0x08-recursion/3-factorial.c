#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of a given integer.
 * @n: The integer for which to calculate the factorial.
 *
 * Return: the factorial or -1 or 1
 */

int factorial(int n)
{
	if (n <= -1)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
