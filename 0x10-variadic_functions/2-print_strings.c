#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - Prints strings separated by a given separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 *
 * Description: This function prints a variable number of strings
 * separated by the given separator.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *str;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);

printf("\n");

}
