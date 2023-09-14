#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - putting positive or negative for a given value
 *
 * @i: the value to be worked on
 *
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
