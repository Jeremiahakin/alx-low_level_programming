#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: string to be checked
 * Return: string length
 */
int _strlen(char *s)
{
int string_length = 0;
while (s[string_length] != '\0')
{
string_length++;
}
return (string_length);
}
