#include "main.h"

/**
 * _isalpha - Retruning either 1 or 0 for any alphabet
 *
 * Return: Always 0
 *
 * @c: the character to print
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
