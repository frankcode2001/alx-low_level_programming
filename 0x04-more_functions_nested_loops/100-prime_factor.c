#include <stdio.h>

/**
 * main - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */
int main(void)
{
	long num;
	long number = 612852475143;

	for (num = 2; num < number; num++)
	{
		if (number % num == 0)
			number /= num;
	}
	printf("%li\n", number);
	return (0);
}
