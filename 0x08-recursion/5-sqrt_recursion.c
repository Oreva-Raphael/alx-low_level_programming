#include  "main.h"

/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @x: The current guess for the square root.
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, x + 1));
}

/**
 * _sqrt_recursion - main function
 * @n: The number for which to calculate the square root
 * Return: the square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
