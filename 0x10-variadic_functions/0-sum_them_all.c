#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to sum.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	unsigned int k = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list(args);
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			j = va_arg(args, int);
			k += j;
		}

		va_end(args);

		return (k);
	}
}
