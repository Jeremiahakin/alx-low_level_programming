#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the given format.
 * @format: A format string representing the types of arguments passed.
 *
 * Description: This function prints various types of arguments based on
 * the format provided. Supported formats are 'c' for char, 'i' for integer,
 * 'f' for float, and 's' for string.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
int printed = 0;

va_start(args, format);

while (*ptr)
{
if (printed)
{
printf(", ");
}

switch (*ptr)
{
case 'c':
{
printf("%c", va_arg(args, int));
printed = 1;
break;
}
case 'i':
{
printf("%d", va_arg(args, int));
printed = 1;
break;
}
case 'f':
{
printf("%f", (float) va_arg(args, double));
printed = 1;
break;
}
case 's:
{
const char *str = va_arg(args, const char *);
if  (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
printed = 1;
}
break;
default:
break;
}

ptr++;
}

printf("\n");

va_end(args);
}
