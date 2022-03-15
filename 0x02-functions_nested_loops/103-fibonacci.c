#include <stdio.h>

/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, num1, num2, num3, sm;

	num1 = sm = 0;
	num2 = 1;
	for (count = 0; count < 50; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num3 % 2 == 0 && num3 < 4000000)
		{
			sm += num3;
		}
	}
	printf("%lu\n", sm);
	return (0);
}
