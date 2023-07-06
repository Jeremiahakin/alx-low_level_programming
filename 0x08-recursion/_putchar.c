#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - char c
 * Return: value
 */

int putchar(int c)
{
    return write(1, &c, 1);
}
