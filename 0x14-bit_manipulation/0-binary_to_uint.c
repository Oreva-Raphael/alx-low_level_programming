#include "main.h"
/**
 * binary_to_uint- converts a binary number to an unsigned int.
 * @b: pointing to a string o 0's and 1'a
 * Return:converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, y = 0, n = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (i = strlen(b); i > 0; i--)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
		{
			return (0);
		}
		if (b[i - 1] == '1')
		{
			y += n;
		}
		n *= 2;
	}
	return (y);
}
