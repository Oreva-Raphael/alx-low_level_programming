#include "main.h"
/**
 * _puts_recursion - Repeats itself to print out a string followed by a new line
 * @s: the pointer to the first character of the string
 * Return: void
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
