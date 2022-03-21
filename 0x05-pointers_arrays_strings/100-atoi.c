#include "main.h"

/**
 * _atoi - is a function that converts a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int num, num1, num2, num3;

	num = num2 = 0;
	num3 = 1;
	while ((*(s + num) < '0' || *(s + num) > '9') && (*(s + num) != '\0'))
	{
		if (*(s + num) == '-')
			num3 *= -1;
		num++;
	}
	num1 = num;
	while ((*(s + num1) >= '0') && (*(s + num1) <= '9'))
	{
		num2 = num2 * 10 + num3 * (*(s + num1) - '0');
		num1++;
	}
	return (num2);
}
