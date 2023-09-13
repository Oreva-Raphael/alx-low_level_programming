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

	if (y < 0)
	{
		y = _putchar('0' + (-y % 10));
		return (y);
	}
	else
	{
		y = _putchar('0' +  (y % 10));
		return (y);
	}
}
