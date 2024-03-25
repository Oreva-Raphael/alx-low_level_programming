#include "main.h"

/**
 * _strlen - Finding the length of a string
 *
 * @s: the input to finding each character
 *
 * Return: retruning an integer.
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
