#include "main.h"
/**
 * print_sign - prints the sign of the number
 *
 * Return: 0 always
 *
 * @n: Input value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
