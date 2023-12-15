#include "main.h"
/**
 * get_bit- used to return the value of a bit at a given index
 * @n: the number to index through
 * @index: the one doing most of the work.
 * Return: returningthe world.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
