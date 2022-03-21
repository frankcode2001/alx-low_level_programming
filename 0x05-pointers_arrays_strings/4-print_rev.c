#include "main.h"

/**
 * print_rev - a function that prints a reversed string in stdout
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int num = 0;

	while (*(s + num))
		num++;
	num -= 1;
	while (num >= 0)
	{
		_putchar(*(s + num));
		num--;
	}
	_putchar('\n');
}
