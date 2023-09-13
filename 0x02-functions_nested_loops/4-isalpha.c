#include "main.h"

/**
 * _isalpha - Retruning either 1 or 0 for any alphabet
 *
 * Return: Always 0
 *
 * c - parameter to get the function work
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
