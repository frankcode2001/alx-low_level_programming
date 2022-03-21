#include "main.h"

/**
 * puts2 - prints every other character of a string to stdout
 *
 * Return: void
 */
void puts2(char *str)
{
	int num;

	for (num = 0; *str; str += 2) 
	{
    		_putchar(*str);
  	}
	_putchar('\n');
}
