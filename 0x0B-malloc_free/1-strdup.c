#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function for pointer
 * @str: str to be used
 * Return: duplicate
 */
char *_strdup(char *str)
{
if (str == NULL)
	return (NULL);

char *duplicate;
unsigned int length = 0;

while (str[length] != '\0')
	length++;

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
	return (NULL);

for (unsigned int i = 0; i <= length; i++)
	duplicate[i] = str[i];
return (duplicate);
}
