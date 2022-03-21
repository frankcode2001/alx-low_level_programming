#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int num1 = 0, num2 = 0;
	char str[500];

	while (*(s + num1))
	{
		*(str + num1) = *(s + num1);
		num1++;
	}
	num1 -= 1;
	while (num1 >= 0)
	{
		*(s + num1) = *(str + num2);
		num2++;
		num1--;
	}
}
