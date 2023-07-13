#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore */
	printf("%d\n", argc - 1);
	return (0);
}
