#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int num, num1;

	for (num = 0; s[num] != '\0'; num++)
	{
		for (num1 = 0; accept[num1] != '\0'; num1++)
		{
			if (s[num] == accept[num1])
				return (s + num);
		}
	}

	return (0);
}
