#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: pointer to the character
 * Return: void (Nothing)
 */

void print_chessboard(char (*a)[8])
{
	int rows, columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
