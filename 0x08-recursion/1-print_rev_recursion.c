#include "holberton.h"

/**
 * _print_rev_recursion - reverse strings
 * @s: buffer string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
