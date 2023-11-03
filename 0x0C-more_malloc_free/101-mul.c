#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 98 on error.
 */

int main(int argc, char *argv[])
{
	int i;
	char *str = argv[1];
	char *str2 = argv[2];
	unsigned long num1;
	unsigned long num2;
	unsigned long result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; str2[i] != '\0'; i++)
	{
		if (str2[i] < '0' || str2[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	num1 = strtoull(str, NULL, 10);
	num2 = strtoull(str2, NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
