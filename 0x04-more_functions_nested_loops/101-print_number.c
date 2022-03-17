#include "main.h"

/**
 * print_number - prints an integer
 * @n: Input number
 */

void print_number(int n)
{
	long a;
	long b; 
	long c; 
	long d;
	long e;

	b = n;
	e = a =  1;

/*Check for a negative number*/
	if (b < 0)
	{
		b *= -1;
		_putchar('-');
	}

	d = b;
	while (d >= 10)
	{
		a++;
		d /= 10;
	}

/*Create a number to the power(exponent)*/
	for (c = 1; c < a; c++)
		e *= 10;

	while (e > 1)
	{
		_putchar((b / e) % 10 + '0');
		e /= 10;
	}
	_putchar(b % 10 + '0');
}
