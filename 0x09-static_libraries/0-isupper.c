#include  "main.h"
/**
 * _isupper - checkz if upperrcase letters
 * @c: char to check
 * Return: always 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
