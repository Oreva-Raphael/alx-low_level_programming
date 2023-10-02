#include "main.h"

/**
 * factorial - the function to print factorial
 * @n: the integer number
 * Return: return a value
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
