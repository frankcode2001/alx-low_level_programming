#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int print_last_digit(int m)
{

	int last_digit = m%10;

	if (last_digit >= 0)
	{
		putchar(last_digit + '0');

	}

	else if (last_digit < 0)
	{
		int result = (last_digit * -1);
		putchar(result + '0');

	}

}
int main(void)
{
	print_last_digit(-32);

}
