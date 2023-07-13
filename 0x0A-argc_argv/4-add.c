#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if it's a digit, 0 otherwise
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, num, sum;

sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);

if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}

if (num < 0 || !is_digit(*argv[i]))
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);
return (0);
}
