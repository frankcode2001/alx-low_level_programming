#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - assigns a random number to int n everytime
* it executes and prints it
* Return: Always 0 (Success)

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("%d is a positive number\n", n);
	}

	else if (n == 0) {
		printf("%d is zero\n", n);
	}

	else if (n < 0) {
		printf("%d is a negative number\n", n);
	return (0);
}

}
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
