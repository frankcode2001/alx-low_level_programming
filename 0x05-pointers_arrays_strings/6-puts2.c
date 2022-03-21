#include "main.h"
/**
 * puts2 - prints every other character of a string to stdout
 * @str: input string to print.
 */
void puts2(char *str)
{
	int num;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
			_putchar(str[num]);
		num++;
	}
	_putchar('\n');
}
