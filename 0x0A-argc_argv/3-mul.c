#include <stdio.h>
#include <stdlib.h>
/**
* main - Program Entry point
* @argc: argument counter
* @argv: argument vector (array of string)
* Return: Always 0 Successful
*/
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", product);
	return (0);

}
