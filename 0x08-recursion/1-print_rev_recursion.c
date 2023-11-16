#include "main.h"
/**
 * _print_rev_recursion-Display the reverse of a string then a new line
 * @s: the pointer to the first character
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
