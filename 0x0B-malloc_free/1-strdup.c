#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function for pointer
 * @str: str to be used
 * Return: duplicate
 */
char *_strdup(char *str)
{
char *in;
int i, j = 0;

if (str == NULL)
	return (NULL);

i = 0;
while (str[i] != '\0')
	i++;

in = malloc((i + 1) * sizeof(char));
if (in == NULL)
	return (NULL);

for (j = ; str[j]; j++)
	in[j] = str[j];
return (in);
}
