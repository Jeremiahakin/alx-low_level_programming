#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:  The string to be searched
 * @needle: The string to be located
 * Return: If the substring is located
 * If the substring isnot located -NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return ('\0');
}
