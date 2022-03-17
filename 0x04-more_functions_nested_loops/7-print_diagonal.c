#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int num1;
	int num2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 1; num1 <= n; num1++)
		{
			for (num2 = 1; num2 < num1; num2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
