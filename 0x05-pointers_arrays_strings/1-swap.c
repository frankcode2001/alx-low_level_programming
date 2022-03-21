#include "main.h"

/**
 * swap_int - a function that swaps the values of int a and int b
 * @a: first int to be swapped
 * @b: second int to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int value3;

	value3 = *a;
	*a = *b;
	*b = value3;
}
