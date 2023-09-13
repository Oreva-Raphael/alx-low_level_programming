#include "main.h"

/**
 * _abs - Displaying the absolute of any volume
 *
 * Return: Giving an integer
 *
 * @r: input value
 */
int _abs(int r)
{

	if (r >= 0)
	{
		_putchar('0' + r);
	}
	else
	{
		_putchar('0' + (r * -1));
	}
	return (r);
}
