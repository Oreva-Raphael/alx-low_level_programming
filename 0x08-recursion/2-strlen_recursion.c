#include "main.h"

/**
 * _strlen_recursion - using recursion to print the length of the string
 * @s: the characters of the string
 * Return: return a value eventually
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
