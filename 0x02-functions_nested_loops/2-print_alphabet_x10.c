#include "main.h"

/**
 * print_alphabet_x10 - Display the alphabet 10 times on the stdout
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		counter++;
		c = 'a';
	}
}
