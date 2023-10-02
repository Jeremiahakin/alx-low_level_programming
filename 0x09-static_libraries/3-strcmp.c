#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares the string
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: valuee less than 0
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
