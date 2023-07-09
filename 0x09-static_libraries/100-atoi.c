#include "main.h"

/**
 * _atoi - converts a string into an int
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int u = 1, i = 0;
	unsigned int g = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			u += 1;
		i++;
	}

	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		g = (g * 10) + (s[i] - '0');
		i++;
	}

	g *= u;

	return (g);
}
