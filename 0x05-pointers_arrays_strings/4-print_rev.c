#include "main.h"

/**
 * print_rev -  printing characters in reverse
 *
 * @s: pointer to the character in the string
 *
 */
void print_rev(char *s)
{
	int cout;

	cout = 0;

	while (*s != '\0')
	{
		cout++;
		s++;
	}
	/* Going to the beginning of the string */
	s--;

	while (cout > 0)
	{
		_putchar(*s);
		s--;
		cout--;
	}
	_putchar('\n');
}
