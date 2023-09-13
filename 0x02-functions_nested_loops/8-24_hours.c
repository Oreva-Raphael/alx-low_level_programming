#include "main.h"

/**
 * jack_bauer - Using 2 integers to give the time to 24 hour clock
 *
 * Return: void trype does not need any return value
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
	return;
}
