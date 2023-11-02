#include <stdlib.h>

/**
 * argstostr - Concat program arg into a single string
 * @ac: The number of program arg
 * @av: An array of program arg str
 *
 * Return: A pointer to a new str conca arg, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j = 0;
	int index = 0;
	int len = 0;

	char *arg, *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (arg[j] != '\0')
		{
			j++;
		}
		len += j + 1;
	}

	concat = malloc(len + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		j = 0;
		while (arg[j] != '\0')
		{
			concat[index++] = arg[j++];
		}
		concat[index++] = '\n';
	}
	concat[index] = '\0';

	return (concat);
}
