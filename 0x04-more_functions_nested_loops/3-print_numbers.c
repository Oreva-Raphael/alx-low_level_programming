#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 */
void print_numbers(void)
{
	int n = 10;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
