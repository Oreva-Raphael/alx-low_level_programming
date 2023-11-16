#include "main.h"
/**
 * factorial- finding the factorial of any number recursively
 * @n: input integer
 * Return: return a value to the stdout
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
	return (n * factorial(n - 1));
}
