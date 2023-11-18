#include "main.h"

/**
 * _puts - using this function to print
 *
 * @str: pointer that points to the string
 * nothing else
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
