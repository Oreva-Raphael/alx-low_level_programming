#include "main.h"
/**
 * _pow_recursion- raising x to the power of y
 * @x: the first integer, the base integer
 * @y: the second integer, the power  integer
 * Return: return an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
