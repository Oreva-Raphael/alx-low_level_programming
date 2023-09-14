#include "main.h"

/**
 * _isdigit - Getting a digit
 *
 * Return: retrun an integer
 *
 * @c: the input value
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
