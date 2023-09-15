#include "main.h"

/**
 * print_diagonal - Printing a diagonal line for a number of things
 *
 * @n: the input value
 */
void print_diagonal(int n)
{
	int b;

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
