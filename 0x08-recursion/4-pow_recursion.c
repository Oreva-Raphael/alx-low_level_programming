#include "main.h"

/**
 * _pow_recursion - printing the power of sa base number using recursion
 * @x: base number
 * @y: exponent number
 * Return: returning a value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
