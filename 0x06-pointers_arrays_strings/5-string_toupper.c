#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase to uppercase
 * @i: pointer to string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *i)
{
	int length_of_string;

	length_of_string = 0;

	while (i[length_of_string] != '\0')
	{
		if (i[length_of_string] >= 97 && i[length_of_string] <= 122)
		{
			i[length_of_string] = i[length_of_string] - 32;
		}
		length_of_string++;
	}
	return (i);
}
