#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 Always (Success)
*/
int main(void)

{
	int a;
	long int b;
	long long int c;
	char d;
	float e;


	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}