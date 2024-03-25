#include "main.h"

/**
 * _isupper - Helps distinguish between upper and lower case letters
 *
 * Return: returns a value
 *
 * @c: the value used to compare
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
