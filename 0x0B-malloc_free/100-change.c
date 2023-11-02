#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */

int main(int argc, char *argv[])
{
	int i, total;
	int coins25, coins10, coins5, coins2, coins1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	coins25 = i / 25;
	i = i % 25;
	coins10 = i / 10;
	i = i % 10;
	coins5 = i / 5;
	i = i % 5;
	coins2 = i / 2;
	i = i % 2;
	coins1 = i;

	total = coins25 + coins10 + coins5 + coins2 + coins1;

	printf("%d\n", total);

	return (0);
}
