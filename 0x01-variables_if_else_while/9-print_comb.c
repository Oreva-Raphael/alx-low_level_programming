#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n =10;

	for (n = 0; n < 10; n++)
	{
		putchar( n + 48);
		if (n < 9)
		{
			putchar(',');
		}
		if (n < 9)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
