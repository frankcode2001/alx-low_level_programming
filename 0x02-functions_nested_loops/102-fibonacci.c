#include <stdio.h>

/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, num1, num2, num3;

	num1 = 0;
	num2 = 1;
	for (count = 0; count < 50; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu", num3);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
