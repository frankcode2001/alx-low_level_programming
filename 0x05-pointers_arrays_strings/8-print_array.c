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
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
