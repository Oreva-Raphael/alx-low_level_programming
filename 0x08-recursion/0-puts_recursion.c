#include "main.h"

/**
 * _puts_recursion - Using recursion to print a string
 *
 * @s: the characters of each string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
