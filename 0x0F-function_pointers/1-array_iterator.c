#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - the function to iterate through an array
 * @size: the size of the given array
 * @array: pointer to the array
 * @action: the action to take
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int w;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (w = 0; w < size; w++)
	{
		action(array[w]);
	}
}
