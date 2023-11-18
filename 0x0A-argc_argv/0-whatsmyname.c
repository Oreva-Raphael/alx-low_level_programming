#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: Hopefully prints name of program
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc; /* ignore argc, it is not needed */
	printf("%s\n", argv[0]);
	return (0);
}
