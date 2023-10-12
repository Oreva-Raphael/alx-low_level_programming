#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the int index function
 * @array: the array that will be searched
 * @size: the size of the array
 * @cmp: the pointer to the function that compares
 * Return: return a value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]))
		{
			return (q);
		}
	}
	return (-1);
}
