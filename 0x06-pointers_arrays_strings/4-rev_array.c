#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: array's length.
 */
void reverse_array(int *a, int n)
{
	int num, num1, tp;

	num1 = n - 1;
	for (num = 0; num < n / 2; num++)
	{
		tp = a[num];
		a[num] = a[num1];
		a[num1] = tp;
		num1--;
	}
}
