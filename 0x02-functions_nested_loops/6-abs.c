#include "main.h"

/**
 * _abs - print the absolute value of any integer
 *
 * Return: Always 0
 *
 * @r: the value added
 */
int _abs(int r)
{
	if (r >= 0)
	{
		_putchar('0' + r);
	}
	else
	{
		r = _putchar('0' + (r * -1));
		return (r);
	}
}
