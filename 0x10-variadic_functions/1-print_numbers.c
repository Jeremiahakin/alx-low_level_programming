#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Description: This function prints a variable number of integers
 * seperated by the given seperator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int k = 0;
	unsigned int j = strlen(separator);
	unsigned int l = 0;

	if (separator == NULL)
	{
		return;
	}
	else
	{
		va_list(args);
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			k = va_arg(args, int);
			if (i < n - 1)
			{
				printf("%d", k);
				while (l < j)
				{
					putchar(separator[l]);
					l++;
				}
				l = 0;
			}
			else
			{
				printf("%d", k);
			}
		}
		va_end(args);

		printf("\n");
	}
}
