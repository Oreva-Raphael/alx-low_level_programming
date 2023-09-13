#include "main.h"

/**
 * print_last_digit - printing the last digit of numbers
 *
 * Return: Return a value for whatever is dropped
 *
 * @y: the entry value
 */
int print_last_digit(int y)
{

	if (y >= 0)
	{
		y = y % 10;
		_putchar('0' + y);
		return (y);
	}
	else
	{
		y = (-y) % 10;
		_putchar('0' + y);
		return (y);
	}
}
