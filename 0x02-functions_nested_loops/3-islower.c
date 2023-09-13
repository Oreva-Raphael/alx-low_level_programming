#include "main.h"

/**
 * _islower - To print the lower character
 *
 * Return: Always 0
 *
 * @c: The character to print
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
