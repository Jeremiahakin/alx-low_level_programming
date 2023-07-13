#include "main.h"

/**
 * _puts_recursion - prints a string then a new line
 * @s: pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');  /*Print a new line instead of '\0'*/
        return;
    }

    _putchar(*s);
    _puts_recursion(s + 1);  /* Recursively call with the next character*/
}