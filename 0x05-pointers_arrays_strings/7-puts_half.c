#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int num, num1 = 0;

	while (*(str + num1))
		num1++;
	num = num1 / 2;
	if (num1 % 2)
		num += 1;
	while (num < num1)
	{
		_putchar(*(str + num));
		num++;
	}
	_putchar('\n');
}
