#include <stdio.h>

/**
 * main - The entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, non-zero on failure.
 */
int main(int argc, char *argv[])
{
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
char *arg = argv[i];
for (int j = 0; arg[j] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
}

int num = atoi(arg);
sum += num;

}

printf("%d\n", sum);
return (0);
}
