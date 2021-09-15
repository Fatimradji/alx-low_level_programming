#include "holberton.h"

/**
 * _puts_recursion - prints to screen
 * @s: buffer characters
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar(10);
	}
}
