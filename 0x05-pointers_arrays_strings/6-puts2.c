#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *@str: the string to be used.
 */

void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
		num++;
	}
	_putchar('\n');
}
