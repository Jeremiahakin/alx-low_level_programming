#include <unistd.h>

/**
 * _putchar - writes the character  to the stdout
 * @c: the character to print
 * Return: Om success 1
 * On error, -1 uis returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
