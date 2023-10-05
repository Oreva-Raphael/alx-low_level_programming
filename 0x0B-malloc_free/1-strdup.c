#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: a character or NULL if fail
 */
char *_strdup(char *str)
{
	char *arr;
	int x, y;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	arr = malloc(sizeof(char) * (x + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
	{
		arr[y] = str[y];
	}
	return (arr);
}
