#include "main.h"

/**
 * is_palindrome - tests if a string is a palindrome
 * Description:
 * @s: input string
 * Return: either 1 or 0 if a string is a palindrome or not
 */
int is_palindrome(char *s)
{
	return (palindrome_test(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - prints length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome_test- test if a string is palindrome
 * @s: string
 * @x: starting of strin
 * @y: ending of string
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int palindrome_test(char *s, int x, int y)
{
	if (s[x] == s[y])
	{
		if (x > y / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome_test(s, x + 1, y - 1));
		}
	}
	return (0);
}
