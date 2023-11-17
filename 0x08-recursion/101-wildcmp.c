#include "main.h"
/**
 * wildcard_check- serious recursion complexity
 * @s1: string without wilcard
 * @s2: string with wildcard *
 * Return: either 1 or 0 if identical or not
 */
int wildcard_check(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcard_check(s1, s2 + 1) || (*s1 && wildcard_check(s1 + 1, s2)));
	}
	if (*s1 == *s2)
	{
		return (wildcard_check(s1 + 1, s2 + 1));
	}
	return (0);
}
/**
 * wildcmp- compare two strings with wildcards
 * @s1: string
 * @s2: string with wildcard *
 * Return: either  or 0 if identical
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcard_check(s1, s2));
}
