#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: None.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_res = 0, i, j, k;
	int *result;

	while (num1[len1] != '\0')
		len1++;

	while (num2[len2] != '\0')
		len2++;

	len_res = len1 + len2;

	result = malloc(sizeof(int) * len_res);

	for (i = 0; i < len_res; i++)
		result[i] = 0;


	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';

			result[i + j + 1] += digit1 * digit2;
		}
	}

	for (i = len_res - 1; i > 0; i--)
	{
		result[i - 1] += result[i] / 10;
		result[i] %= 10;
	}

	for (k = 0; k < len_res; k++)
		printf("%d", result[k]);

	 printf("\n");
	 free(result);
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}
