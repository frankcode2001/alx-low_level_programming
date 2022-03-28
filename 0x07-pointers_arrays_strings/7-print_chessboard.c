#include "main.h"

/**
 *print_chessboard - print a matrice.
 *@a: matrice.
 */
void print_chessboard(char (*a)[8])
{
	int num, num1;

	for (num = 0; num < 8; num++)
	{
		for (num1 = 0; num1 < 8; num1++)
		{
			_putchar(a[num][num1]);
			if (num1 == 7)
				_putchar('\n');
		}
	}
}
