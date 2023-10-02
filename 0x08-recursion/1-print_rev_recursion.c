#include "main.h"

/**
 * _print_rev_recursion - printing the reverse recursion
 * @s: the character of each string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	 /* this recursively goes to the end of the string */
	_print_rev_recursion(s + 1);
	/* this prints from the end to the beginning */
	_putchar(*s);
}
