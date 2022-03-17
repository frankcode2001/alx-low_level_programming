#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 1; num1 <= size; num1++)
		{
			_putchar('#');
			for (num2 = 2; num2 <= size; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
