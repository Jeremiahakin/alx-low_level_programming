#include <stdio.h>
#include "main.h"

int _prime(int n, int y);

/**
 * is_prime_number - Check if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - Check if a number is a prime number.
 * @n: The number to be checked.
 * @y: incremented no
 * Return: 1 if 'n' is a prime number, 0 otherwise.
 */
int _prime(int n, int y)
{
	if (n % y == 0 || n <= 0)
	{
		return (0);
	}
	else if (y * y > n)
	{
		return (1);
	}
	else
	{
		return (_prime(n, y + 1));
	}
}
