#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char words[] = "_putchar";
	int a = 0;

	while (words[a] != '\0')
	{
		putchar(words[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
