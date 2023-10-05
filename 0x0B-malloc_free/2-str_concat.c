#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenate strings
 * @s1: the first string
 * @s2: the second string
 * Return: return the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int q, w;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	q = w = 0;
	while (s1[q] != '\0')
	{
		q++;
	}
	while (s2[w] != '\0')
	{
		w++;
	}
	concat = malloc(sizeof(char) * (q + w + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	q = w = 0;
	while (s1[q] != '\0')
	{
		concat[q] = s1[q];
		q++;
	}
	while (s2[w] != '\0')
	{
		concat[q] = s2[w];
		q++;
		w++;
	}
	concat[q] = '\0';
	return (concat);
}
