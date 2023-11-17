#include "main.h"
/**
 * _sqrt_recursion- using recursion to find the square root of a number
 * @n: the number to find the square root of
 * Return: return -1 if wrong then return square root if right
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_test(n, 0));
}
/**
 * sqrt_test- To test if a number is a natural square
 * @n: the number to test
 * @natsquare: testing the positive number
 * Return: return -1 or pos_square at the end
 */
int sqrt_test(int n, int natsquare)
{
	if (natsquare * natsquare == n)
	{
		return (natsquare);
	}
	if (natsquare * natsquare > n)
	{
		return (-1);
	}
	return (sqrt_test(n, (natsquare + 1)));
}
