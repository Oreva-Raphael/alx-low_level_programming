#include "main.h"

/**
 * print_square - printing squares
 *
 * @size: the size of the square
 */
void print_square(int size)
{
	#include "main.h"
/**
* print_square - prints a square in the terminal
* Description:
* @size: size of square to print
* 
*/

void print_square(int size)
{
	int col, row;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			if (row == size - 1)
			{
			_putchar(35);
			_putchar('\n');
			}

			else
			{
			_putchar(35);
			}
		}
	}

	if (size <= 0)
	{
		_putchar('\n');
	}

}
