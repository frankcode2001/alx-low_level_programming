#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int num;
	int res;

	for (num = 0; num < 1024; num++)
		if (num % 3 == 0 || num % 5 == 0)
			res += num;
	printf("%d\n", res);
	return (0);
}
