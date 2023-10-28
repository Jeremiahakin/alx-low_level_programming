#include <stdio.h>
#include <stdlib.h>

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, non-zero on failure.
 */
int main(int argc, char *argv[])
{
	int i, num;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			num = atoi(argv[i]);
			mul *= num;
		}
	}
	printf("%d\n", mul);
	return (0);
}
