#include "main.h"

/**
 * swap_int - Changing the address of two variables
 *
 * @a: input one
 * @b: input two
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
