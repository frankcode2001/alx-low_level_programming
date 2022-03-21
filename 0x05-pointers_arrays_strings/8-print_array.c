#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int num = 0;

	while (num < n)
	{
		printf("%d", a[num]);
		if (num < (n - a[num]))
			printf(", ");
		num++;
	}
	printf("\n");
}
