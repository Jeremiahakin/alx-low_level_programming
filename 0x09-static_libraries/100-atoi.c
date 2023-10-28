#include "main.h"
#include <stdio.h>

/**
 * _atoi - changes a str to an int
 * @s: the string to be checked
 * Return: the converted int
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int num = 0;

while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
{
i++;
}

if (s[i] == '-')
{
sign = -1;
i++;
}

else if (s[i] == '+')
{
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}

return (num *sign);
}
