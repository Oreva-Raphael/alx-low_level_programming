#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - printing a chessboard, I have to learn this one properly
 */
void print_chessboard(char (*a)[8])
{
	char space = ' ';
	char nextline = '\n';
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8, j++)
		{
			if ((i + j) % 2 == 0)
			{
				write(1, &space, 1);
			}
			else
			{
				write(1, &a[i][j]; 1);
			}
		write(1, &newline, 1);
	}
}
