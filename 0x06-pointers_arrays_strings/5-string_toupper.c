#include "main.h"

/**
 * string_toupper - converting a string to uppercase
 * @s: the string to be converted
 * Return: returning an output to stdout
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
