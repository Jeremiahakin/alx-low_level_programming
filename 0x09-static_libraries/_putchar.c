#include <unistd.h>
/**
 * _putchar - replaces print
 * @c: writes
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
