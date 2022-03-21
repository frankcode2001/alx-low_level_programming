#include "main.h"

/**
 * _puts - a function that prints a string in stdout followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int num = 0;

	while (*(str + num))
	{
		_putchar(*(str + num));
		num++;
	}
	_putchar('\n');
}
