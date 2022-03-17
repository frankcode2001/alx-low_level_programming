#include "main.h"

/**
 * print_number - prints a number with _putchar
 * @n: Number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	int a, b, dec;
	unsigned int num1, num2;

	a = 1;
	if (n < 0)
	{
		n = n * -1;
		dec = 1;
	}
	num1 = n;
	num2 = n;
	while (num1 >= 10)
	{
		num1 = num1 / 10;
		a = a * 10;
	}
	if (dec == 1)
	{
		_putchar('-');
	}
	_putchar('0' + (num2 / a));
	b = a / 10;
	while (b >= 1)
	{
		_putchar('0' + (num2 / b) % 10);
		b = b / 10;
	}
}
