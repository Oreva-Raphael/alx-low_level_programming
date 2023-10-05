#include "main.h"
#include <stdlib.h>

/**
 * create_array - using malloc to create an array of characters
 * @size: size of array
 * @c: character to assign
 * Description: create an array of size 'size' and assign c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ans;
	unsigned int z;

	ans = malloc(sizeof(char) * size);
	if (size == 0 || ans ==  NULL)
	{
		return (NULL);
	}
	for (z = 0; z < size;  z++)
	{
		ans[z] = c;
	}
	return (ans);
}
