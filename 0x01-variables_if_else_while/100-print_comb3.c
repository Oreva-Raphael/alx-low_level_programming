#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int i = 10;
	int j = 10;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		
	}
	putchar('\n');
	return (0);
}
