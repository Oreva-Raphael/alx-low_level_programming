#include "main.h"

/**
 * print_square - printing squares
 *
 * @size: the size of the square
 */
void print_square(int size)
{
	int b;

	for (b = 0; b < size; b++)
	{
		_putchar(35);
	}
	_putchar('\n');
	if (size <= 0)
	{
		_putchar('\n');
	}
}
