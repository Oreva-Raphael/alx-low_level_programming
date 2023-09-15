#include "main.h"

/**
 * more_numbers -  Printing 0 to 14 in a grid
 *
 */
void more_numbers(void)
{
	int i;
	int a = 0;

	for (i = 0; i < 10; i++)
	{
		while (a < 15)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		_putchar('\n');
		a = 0;
	}
}
