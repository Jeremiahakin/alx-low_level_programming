#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%s\n", argv[1]);
	}
	else
	{
		printf("No command-line arguments provided.\n");
	}

	return (0);
}
