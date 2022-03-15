#include <stdio.h>

/**
  * main - print the first 98 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	int count;
	unsigned long num1, num2, num3;
	unsigned long a, b, c, d;

	count = 0;
	num1 = 0;
	num2 = 1;
	for (count = 1; count <= 91; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
	}
	a = num1 % 1000;
	num1 = num1 / 1000;
	b = num2 % 1000;
	num2 = num2 / 1000;
	while (count <= 98)
	{
		d = (a + b) / 1000;
		c = (a + b) - d * 1000;
		num3 = (num1 + num2) + d;
		a = b;
		b = c;
		num1 = num2;
		num2 = num3;
		if (c >= 100)
			printf("%lu%lu", num3, c);
		else
			printf("%lu0%lu", num3, c);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
