#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- Entry point for the program
 * @argc: argument counter
 * @argv: argument vector (array of strings)
 * Return: always 0 (successful)
 */
int main(int argc, char *argv[])
{
	int i, j,  add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
