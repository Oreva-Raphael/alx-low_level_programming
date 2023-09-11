#include <stdio.h>
 /**
  * main - The start of C programs
  *
  * Return: Always 0 (If Successful)
  */
int main(void)
{
	int num = 10;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
