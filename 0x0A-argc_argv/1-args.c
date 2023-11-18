#include <stdio.h>
#include <stdlib.h>
/**
 * main- Entry point of the code
 * @argc: the argument counter
 * @argv: the argument array
 * Return: Always (0) successful
 */
int main(int argc, char *argv[])
{
	(void)**argv;
	printf("%d\n", argc - 1);
	return (0);
}
