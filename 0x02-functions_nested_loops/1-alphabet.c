#include "main.h"

/**
 * print_alphabet - To print alphabets from a to z
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
