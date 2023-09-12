#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char digit[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(digit[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
