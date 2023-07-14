#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen -cal and return str len
 * @string: str
 * Return: str inputs
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *concat;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
	n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
	return (NULL);

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';

return (concat);
}
