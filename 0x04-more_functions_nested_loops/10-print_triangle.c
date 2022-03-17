#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int side1;
	int side2;
	int side3;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (side1 = 1; side1 <= size; side1++)
		{
			for (side3 = size - side1; side3 >= 1; side3--)
			{
				_putchar(' ');
			}
			for (side2 = 1; side2 <= side1; side2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
