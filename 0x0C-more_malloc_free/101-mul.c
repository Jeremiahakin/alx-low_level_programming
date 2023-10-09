#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if successful, 98 if there are input errors.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned long int result;
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = atoll(num1) * atoll(num2);
	printf("%lu\n", result);

	return (0);
}
