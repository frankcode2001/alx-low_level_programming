#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * if multiples of 3 print Fizz instead of the number
 * and if multiples of 5 print Buzz instead of the number
 * if a multiple of both 3 & 5 print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char ch1[] = "Fizz";
	char ch2[] = "Buzz";
	char ch3[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s", ch2);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s ", ch3);
		else if (num % 3 == 0)
			printf("%s ", ch1);
		else if (num % 5 == 0)
			printf("%s ", ch2);
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
