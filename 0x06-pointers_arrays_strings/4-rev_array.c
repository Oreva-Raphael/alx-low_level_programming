#include "main.h"

/**
 * reverse_array - to reverse the contents of an array of integers
 *
 * @a: the array itself
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int algor;
	int x = 0;
	int y = n - 1;

	while (x < y)
	{
		algor = a[x];
		a[x] = a[y];
		a[y] = algor;
		x++;
		y--;
	}
}
