#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @dig: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int dig;

	dig = (num % 10);

	if (dig < 0)
	{
		dig = (-1 * dig);
	}

	_putchar(dig + '0');
	return (dig);
}
