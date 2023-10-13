#include <stdio.h>
#include <stdlib.h>


/**
 * print_name - Prints a name using a given printing function
 * @name: The name to print
 * @f: Pointer to a printing function that takes a char * as a parameter
 *
 * Description: This function prints a name using the provided printing
 * function @f. The printing function should take a char * as a parameter
 * and print the string.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *f != NULL)
	{
		f(name);
	}
}
