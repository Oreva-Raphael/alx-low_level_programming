#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
