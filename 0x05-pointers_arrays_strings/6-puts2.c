#include "main.h"

/**
 * puts2 - priting output
 *
 * @str: tired af
 */
void puts2(char *str)
{
	int count, len;

	count = 0;
	len = 0;

	while (str[count] != '\0')
	{
		len++;
		count++;
	}

	for (count = 0; count < len; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
