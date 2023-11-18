#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point of the program
 * @argc: argument counter
 * @argv: argument vector (string array)
 * Return: Always 0 Successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
