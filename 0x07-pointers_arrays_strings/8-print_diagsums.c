#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of the 2 diagonals of a matrix.
 *@size: size of a square matrix.
 *@a: the matrix.
 */
void print_diagsums(int *a, int size)
{
	int num;
	long int sum  = 0, sizem;

	sizem = size * size;
	for (num = 0; num < sizem; num += size + 1)
		sum += a[num];

	printf("%li, ", sum);
	sum = 0;

	for (num = size - 1; num <= sizem - size + 1; num += size - 1)
		sum += a[num];
	printf("%li\n", sum);
}
