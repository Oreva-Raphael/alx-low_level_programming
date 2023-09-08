#include <stdio.h>
/**
 * main - The entry point that the compiler needs to run the code
 *
 * Description - A program that finds the size in bytes of a data type or expression
 *
 * Retrun: 0 (success)
 */
int main(void)
{
	printf("Size of a char: = %d byte(s)\n", sizeof(char));
	printf("Size of an int: = %d byte(s)\n", sizeof(int));
	printf("Size of a long int: = %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: = %d byte(s)\n", sizeof(float));
	return (0);
}
