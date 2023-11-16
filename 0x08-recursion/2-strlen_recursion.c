#include "main.h"
/**
 * _strlen_recursion- Get the length of string recursively
 * @s: the pointer to the first character
 * Return: return a vlaue to the standard output
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
