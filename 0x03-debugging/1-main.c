#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i); /*No counter in while loop, i will always be < 10 */
	}

	printf("Infinte loop avoided ! \\o/\n");

	return (0);
}
