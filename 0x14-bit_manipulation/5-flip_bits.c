#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int s, t;

	s = 0;
	result = 1;
	differnce = n ^ m;
	for (t = 0; t < (sizeof(unsigned long int) * 8); t++)
	{
		if (result == (differnce & result))
		{
			s++;
		}
		result <<= 1;
	}
	return (s);
}
