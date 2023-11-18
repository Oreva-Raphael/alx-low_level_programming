#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - the function name
 * @s: the first character
 * @accept: the second character
 * Return: return a character
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
