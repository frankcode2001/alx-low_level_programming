#include "main.h"

/**
 *print_number - print a number using _putchar.
 *@n: the number to be printed.
 */
void print_number(int n)
{
	unsigned int num = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / num) >= 10)
			num *= 10;

		while (num > 0)
		{
			_putchar((n / num) + '0');
			n %= num;
			num /= 10;
		}
	}
}
