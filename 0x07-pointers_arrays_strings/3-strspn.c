#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num, num1, value, check;

	value = 0;

	for (num = 0; s[num] != '\0'; num++)
	{
		check = 0;

		for (num1 = 0; accept[num1] != '\0'; num1++)
		{
			if (accept[num1] == s[num])
			{
				value++;
				check = 1;
			}
		}

		if (check == 0)
			return (value);
	}

	return (value);
}
