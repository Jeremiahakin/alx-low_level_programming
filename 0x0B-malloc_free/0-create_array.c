#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - an array of characters initialized with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *ch = (char *) malloc(size);

for (i = 0; i < size; i++)
{
ch[i] = c;
}
return (ch);
}