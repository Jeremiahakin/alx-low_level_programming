#include "main.h"
/**
 * factorial - returns factorial of a given no
 * @n: no to find factorial of
 * Return: factorial of no
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
